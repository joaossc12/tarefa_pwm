# Projeto: Uso de PWM para controle de servo motor e led

## 📌 Descrição

Este projeto tem como objetivo demonstrar o controle de um servo motor e de um LED utilizando modulação **PWM** com a **Raspberry Pi Pico W**. O código do servo motor implementa o posicionamento para ângulos fixos (0°, 90° e 180°) e variações graduais de PWM, enquanto o código do LED replica essa mesma funcionalidade para ajustar a intensidade luminosa. Ambos os exemplos foram desenvolvidos utilizando o **Pico SDK** e podem ser testados na placa de desenvolvimento **BitDogLab**.

## 🎯 Objetivos

✔ Controlar um servo motor e um LED utilizando sinais PWM.  
✔ Demonstrar posições fixas e variação gradual (sweep) do sinal PWM.  
✔ Utilizar o **Pico SDK** para desenvolvimento em **C**.  


## 📺 Demonstração

- **Execução:**  
- **Vídeo:** [Youtube](https://youtu.be/y3i1wKhQ-Xs) 

## 🛠 Tecnologia Utilizada

### 🔹 **Software**
- **Linguagem de Programação:** C  
- **IDE:** Visual Studio Code  
- **SDK:** Pico SDK  
- **Controle de Versão:** Git  
- **Plataforma de Hospedagem:** GitHub  

### 🔹 **Hardware**
- **Placa de Desenvolvimento:** BitDogLab  
- **Raspberry Pi Pico W**  
- **Servo Motor**  
- **LED**


## 🎮 Funcionalidades

- **Servo Motor:**  
  - **Posicionamento Fixo:** Move para ângulos 0°, 90° e 180° com intervalos definidos (ex.: 5 segundos entre cada posição).  
  - **Variação Gradual:** Executa incremento e decremento gradual do sinal PWM, permitindo um movimento suave entre as posições.

- **LED:**  
  - **Controle de Brilho:** Utiliza a mesma lógica do controle do servo motor para ajustar a intensidade luminosa do LED por meio da variação do sinal PWM.

## 📡 Interfaces Utilizadas

- **PWM:**  
  Utilizado para gerar os sinais de controle tanto para o servo motor quanto para o LED. A modulação PWM possibilita o ajuste fino da posição do servo e da luminosidade do LED.

## 📝 Como Executar o Projeto

1️⃣ **Clone o repositório:**
```sh
git clone https://github.com/joaossc12/tarefa_pwm
```
2️⃣ Abra a pasta desejada:

No VScode vá em File - Open Folder e selecione a pasta desejada (A pasta do projeto deve ser aberta diretamente para reconhecimento do Pico Project):
```sh
  tarefa_pwm_led:
    compile o código usando o Raspberry Pi Pico Project
    carregue na sua BitDogLab (Obs: A simulação no Wokwi não reproduz os resultados desejados)
```
```sh
  tarfa_pwm_motor:
    compile o código usando o Raspberry Pi Pico Project
    Inicie a simulação no ambiente Wokwi integrado
```