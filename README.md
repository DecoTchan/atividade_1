# 🚦 Atividade 1 - Semáforo com Temporizador Periódico

## 📌 Descrição
Este projeto implementa um **semáforo simples** utilizando o microcontrolador **Raspberry Pi Pico W**. O sistema altera os sinais **vermelho, amarelo e verde** a cada **3 segundos** utilizando um **temporizador periódico (`add_repeating_timer_ms()`)**. Além disso, uma mensagem é enviada à porta serial a cada **1 segundo**.

## 🛠 Componentes Utilizados
- Raspberry Pi Pico W
- 3 LEDs (Vermelho, Amarelo e Verde)
- 3 Resistores de **330Ω**
- Simulação no **Wokwi**
- Teste na **BitDogLab** utilizando LED RGB (GPIOs **11, 12 e 13**)

## 🎯 Funcionalidade
1. O sistema inicia com o LED **vermelho** aceso.
2. A cada **3 segundos**, o semáforo muda para a próxima cor:
   - **Vermelho** → **Amarelo** → **Verde** → **Vermelho** (loop infinito).
3. A cada **1 segundo**, o sistema exibe uma mensagem via **porta serial** indicando o estado atual do semáforo.

## 📌 Pinagem (GPIOs)
| Componente | GPIO |
|------------|------|
| LED Vermelho | GP11 |
| LED Amarelo  | GP12 |
| LED Verde    | GP13 |

## 🚀 Como Rodar no Wokwi
1. Abra o [Wokwi](https://wokwi.com/)
2. Carregue o `diagram.json` da atividade 1.
3. Compile e rode o código em C no **VS Code** com o **Pico SDK**.

## 🖥️ Como Rodar na BitDogLab
1. Conecte os LEDs às portas **GPIO11, GPIO12 e GPIO13**.
2. Compile e transfira o firmware para a **BitDogLab**.
3. Observe as trocas de cor no LED RGB.

## 📜 Código-Fonte
O código-fonte está disponível no repositório **GitHub** do projeto.
