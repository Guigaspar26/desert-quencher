#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_sleep.h"

#define WATER_GPIO 26
#define microToSeconds 1000000

void water_task(){

    //gpio setup
    gpio_pad_select_gpio(WATER_GPIO);
    gpio_set_direction(WATER_GPIO, GPIO_MODE_OUTPUT);

    //ligar/desligar
    gpio_set_level(WATER_GPIO, 1);
    vTaskDelay(10000 / portTICK_RATE_MS);
    gpio_set_level(WATER_GPIO, 0);

    //dormir
    esp_sleep_enable_timer_wakeup(60*microToSeconds);
    esp_deep_sleep_start();
}

void app_main() {

    //correr a task criada
    xTaskCreate(&water_task, "water_task", 4096, NULL, 5, NULL);
   
}