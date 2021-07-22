#include "modes.h"


void reduced_intensity_mode()
{
    /* Ôóíêöèÿ ðàáîòû ñâåòîôîðà â ðåæèìå "Ñíèæåííîé èíòåíñèâíîñòè"
     */
    
    init();
    flashing_yellow(NUM_ROUND_REDUCED_MODE, FLASHING_TIME);
}

void day_mode()
{
    /* 
     * Панель управления системой "Светофор".
     * 
     * В этом файле представлены макросы,
     * которые помогают управлять светофором:
     * временем работы каждого сигнала, 
     * количество кругов работы каждого
     * режима, время миганий сигналов.
     * И макросы, облегчающие написание кода
     * и делающие его нативно понятным.
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
    /* Ôóíêöèÿ ðàáîòû ñèñòåìû "Ñâåòîôîð" â ðåæèìå "Ïåøåõîä" */
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
    /* Ôóíêöèÿ ðàáîòû ñèñòåìû "Ñâåòîôîð" â ðåæèìå "Çåëåíîé óëèöû" */
    init();
    green(SIGNAL_TIME_RED * NUM_ROUND_GREEN_STREET_MODE);
}
