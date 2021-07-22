#include "traffic_lights.h"


void init()
{
    /* Функция инициализации системы */
    TRISF = 0x00;       LATF = off;
    TRISG = 0x00;       LATG = off;
    flashing_yellow(NUM_FLASHING_YELLOW, FLASHING_TIME);
}

void delay(float sec)
{
    __delay32(sec*16000000UL);
}

void red(float signal_time)
{
    /* 
     * Функция включения красного сигнала (G1 -> HL2).
     * Включает красный сигнал светофора на время signal_time_red
     * 
     */
    signal_red = on;
    delay(signal_time);
    signal_red = off;
}

void yellow(float signal_time)
{
    /*
     * Функция включения желтого сигнала
     * F1 -> HL3
     */
    signal_yellow = on;
    delay(signal_time);
    signal_yellow = off;
}

void green(float signal_time)
{
    /*
     * Функция включения зеленого сигнала
     * G0 -> HL1
     */
    signal_green = on;
    delay(signal_time);
    signal_green = off;
}

void red_and_yellow(float signal_time)
{
    /*
     * Функция включения и красного и желтого сигнала
     */
    signal_red = on;
    yellow(signal_time);
    signal_red = off;
}

void flashing_yellow(float num_signal, float flashing_time)
{
    /*
     * Функция мигающего желтого цвета
     * F1 -> HL3
     */
    unsigned i = 0; 
    while (i < num_signal)
    {
        signal_yellow = on;
        delay(flashing_time);
        signal_yellow = off;
        delay(flashing_time);
        i++;
    }
}

void flashing_green(float num_signal, float flashing_time)
{
    /*
     * Функция мигающего зеленого цвета
     */
    unsigned i = 0; 
    while (i < num_signal)
    {
        signal_green = on;
        delay(flashing_time);
        signal_green = off;
        delay(flashing_time);
        i++;
    }
}
