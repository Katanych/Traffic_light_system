#include "modes.h"


void reduced_intensity_mode()
{
    /* Функция работы светофора в режиме "Сниженной интенсивности"
     */
    
    init();
    flashing_yellow(NUM_ROUND_REDUCED_MODE, FLASHING_TIME);
}

void day_mode()
{
    /* Функция работы светофора в "Дневном" режиме
     * После инициализации системы светофор производит
     * пять миганий (FLASHING_YELLOW), после чего
     * светофор начинает свою работу с красного цвета.
     * После того, как он погорит RED_SIGNAL_TIME 
     * секунд, с ним вместе загарается желтый цвет, 
     * после чего одиночный зеленый. Как только время
     * работы зеленого будет подходить к коцу, он начнет
     * мигать и после затухания загорится желтый и снова
     * красный. Этот процесс будет повторяться COUNT раз.
     */
    
    init();
    unsigned i = 0;
    while(i < NUM_ROUND_DAY_MODE)
    {
        red(SIGNAL_TIME_RED);
        red_and_yellow(SIGNAL_TIME_RED_AND_YELLOW);
        green(SIGNAL_TIME_GREEN);
        flashing_green(NUM_FLASHING_GREEN, FLASHING_TIME);
        yellow(SIGNAL_TIME_YELLOW);
        i++;
    } 
}

void pedestrian_mode()
{
    /* Функция работы системы "Светофор" в режиме "Пешеход" */
    init();
    unsigned i = 0;
    while (i < NUM_ROUND_PEDESTIAN_MODE)
    {
        red(SIGNAL_TIME_RED + 2);
        green(SIGNAL_TIME_GREEN - 2);
        flashing_green(NUM_FLASHING_GREEN, FLASHING_TIME);
        i++;
    }
}
    
void green_street_mode()
{
    /* Функция работы системы "Светофор" в режиме "Зеленой улицы" */
    init();
    green(SIGNAL_TIME_RED * NUM_ROUND_GREEN_STREET_MODE);
}