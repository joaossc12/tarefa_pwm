#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pwm.h"


// 250 x (9999 + 1) = 2.500.000
//125 M/2.5 M = 50 hz
#define PIN_PWM 12
uint16_t DTs[3] = {1200,735,250};
uint8_t Angulo[3] = {180,90,0};
uint16_t warp = 9999;
float div = 250.0; 
uint16_t nivel_pwm = 250;
uint16_t step_pwm = 3;
float duty;
int main() {
  stdio_init_all();
  gpio_set_function(PIN_PWM, GPIO_FUNC_PWM); //habilitar o pino GPIO como PWM
  uint slice = pwm_gpio_to_slice_num(PIN_PWM); //obter o canal (slice) PWM da GPIO
  pwm_set_clkdiv(slice, div); //define o divisor de clock do PWM
  pwm_set_wrap(slice, warp); //definir o valor de wrap – valor máximo do contador PWM
  pwm_set_enabled(slice, true); //habilitar o pwm no slice correspondent
  while (true) {
    printf("___MANTENDO SERVO EM POSICOES FIXAS___ \n");
    for (int i =0; i<3; i++){
      duty = (float)DTs[i]/warp;
      pwm_set_gpio_level(PIN_PWM, DTs[i]);
      printf("Nivel do PWM: %d|  Duty cicle: %.4f\n", DTs[i],duty);
      sleep_ms(5000);
    }
    printf("___FAZENDO INCREMETACAO GRADUAL___ \n");
    while(nivel_pwm < DTs[0]){
      nivel_pwm += step_pwm;
      pwm_set_gpio_level(PIN_PWM, nivel_pwm);
      duty = (float)nivel_pwm/warp;
      printf("Nivel do PWM: %d|Duty cicle: %.4f\n", nivel_pwm, duty);
      sleep_ms(10);
    }
    sleep_ms(3000);
    printf("___DESFAZENDO INCREMETACAO GRADUAL___ \n");
    while(nivel_pwm > DTs[2]){
      nivel_pwm -= step_pwm;
      pwm_set_gpio_level(PIN_PWM, nivel_pwm);
      duty = (float)nivel_pwm/warp;
      printf("Nivel do PWM: %d|Duty cicle: %.4f\n", nivel_pwm, duty);
      sleep_ms(10);
    }
    sleep_ms(3000);
  }
}