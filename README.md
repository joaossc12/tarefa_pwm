# Projeto: Uso de PWM para controle de servo motor e led

## 📌 Descrição

Este projeto tem como objetivo demonstrar o controle de um servo motor e de um LED utilizando modulação **PWM** com a **Raspberry Pi Pico W**. O código do servo motor implementa o posicionamento para ângulos fixos (0°, 90° e 180°) e variações graduais de PWM, enquanto o código do LED replica essa mesma funcionalidade para ajustar a intensidade luminosa. Ambos os exemplos foram desenvolvidos utilizando o **Pico SDK** e podem ser testados na placa de desenvolvimento **BitDogLab**.

## 🎯 Objetivos

✔ Controlar um servo motor e um LED utilizando sinais PWM.  
✔ Demonstrar posições fixas e variação gradual (sweep) do sinal PWM.  
✔ Utilizar o **Pico SDK** para desenvolvimento em **C**.  
✔ Prototipar e testar a funcionalidade na placa **BitDogLab**.

## 📺 Demonstração

- **Execução na Placa BitDogLab:**  
- **Vídeo:** [Youtube]() *(Exemplo, se aplicável)*

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

## 📂 Estrutura do Projeto

tarefa_pwm/ 
│── build/ # Arquivos compilados (gerado pelo CMake) 
│── CMakeLists.txt # Configuração do CMake 
│── pico_sdk_import.cmake # Importação do SDK do Pico 
│── README.md # Documentação do projeto │── servo_control.c # Código para controle do servo motor 
│── tarefa_pwm_led.c # Código para controle do LED com PWM

ruby
Copiar
Editar

## 🎮 Funcionalidades

- **Servo Motor:**  
  - **Posicionamento Fixo:** Move para ângulos 0°, 90° e 180° com intervalos definidos (ex.: 5 segundos entre cada posição).  
  - **Variação Gradual:** Executa incremento e decremento gradual do sinal PWM, permitindo um movimento suave entre as posições.

- **LED:**  
  - **Controle de Brilho:** Utiliza a mesma lógica do controle do servo motor para ajustar a intensidade luminosa do LED por meio da variação do sinal PWM.

## 📡 Protocolos Utilizados

- **PWM:**  
  Utilizado para gerar os sinais de controle tanto para o servo motor quanto para o LED. A modulação PWM possibilita o ajuste fino da posição do servo e da luminosidade do LED.

## 📝 Como Executar o Projeto

1️⃣ **Clone o repositório:**
```sh
git clone https://github.com/usuario/servo_led_control
cd servo_led_control
2️⃣ Compile o projeto:

sh
Copiar
Editar
mkdir build && cd build
cmake ..
make
3️⃣ Carregue o código na sua Raspberry Pi Pico W (ou na placa BitDogLab) e teste as funcionalidades desejadas (servo motor ou LED).