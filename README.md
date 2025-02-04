# Atividade 1 - Temporizador Periódico (Semáforo)

## Descrição
Este projeto implementa um **semáforo** utilizando o **Raspberry Pi Pico W** e a biblioteca **Pico SDK**. O sistema alterna entre as cores vermelho, amarelo e verde a cada 3 segundos usando um temporizador periódico (`add_repeating_timer_ms()`). Além disso, exibe mensagens na porta serial a cada 1 segundo.

## Componentes Utilizados
- **Microcontrolador**: Raspberry Pi Pico W
- **LEDs**:
  - Vermelho (GPIO 11)
  - Amarelo (GPIO 12)
  - Verde (GPIO 13)
- **Resistores**: 330Ω (um para cada LED)

## Como Rodar o Projeto
1. Instale o **Pico SDK** e configure o ambiente de desenvolvimento no **VS Code**.
2. Compile o código e envie para o Raspberry Pi Pico W.
3. Conecte-se à **porta serial** para visualizar as mensagens do sistema.
4. No **Wokwi**, carregue o `diagram.json` e execute a simulação.

## Funcionalidade
- O semáforo inicia no **vermelho**.
- A cada **3 segundos**, muda para **amarelo**, depois para **verde**, e retorna ao vermelho.
- Mensagem "Semáforo operando..." é enviada para a serial a cada **1 segundo**.