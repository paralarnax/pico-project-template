#include "pico/stdlib.h"

#define LED_PIN         1
#define DELAY_TIME      100

int main(void){
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    while (1)
    {
        gpio_put(LED_PIN, 1);
        sleep_ms(DELAY_TIME);
        gpio_put(LED_PIN, 0);
        sleep_ms(DELAY_TIME);
    }
}