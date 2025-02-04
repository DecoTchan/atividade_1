#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

// Definições de GPIO para os LEDs do semáforo
#define LED_R 11  // Vermelho
#define LED_Y 12  // Amarelo
#define LED_G 13  // Verde

// Estados do semáforo
typedef enum { RED, YELLOW, GREEN } TrafficLightState;
TrafficLightState state = RED;

// Callback do temporizador periódico
bool repeating_timer_callback(struct repeating_timer *t) {
    switch (state) {
        case RED:
            gpio_put(LED_R, 1); gpio_put(LED_Y, 0); gpio_put(LED_G, 0);
            state = YELLOW;
            break;
        case YELLOW:
            gpio_put(LED_R, 0); gpio_put(LED_Y, 1); gpio_put(LED_G, 0);
            state = GREEN;
            break;
        case GREEN:
            gpio_put(LED_R, 0); gpio_put(LED_Y, 0); gpio_put(LED_G, 1);
            state = RED;
            break;
    }
    return true;
}

int main() {
    stdio_init_all();
    gpio_init(LED_R); gpio_set_dir(LED_R, GPIO_OUT);
    gpio_init(LED_Y); gpio_set_dir(LED_Y, GPIO_OUT);
    gpio_init(LED_G); gpio_set_dir(LED_G, GPIO_OUT);

    struct repeating_timer timer;
    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);

    while (1) {
        printf("Semáforo operando...\n");
        sleep_ms(1000);
    }
}