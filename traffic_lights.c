#include "traffic_lights.h"


void init()
{
    /* ������� ������������� ������� */
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
     * ������� ��������� �������� ������� (G1 -> HL2).
     * �������� ������� ������ ��������� �� ����� signal_time_red
     * 
     */
    signal_red = on;
    delay(signal_time);
    signal_red = off;
}

void yellow(float signal_time)
{
    /*
     * ������� ��������� ������� �������
     * F1 -> HL3
     */
    signal_yellow = on;
    delay(signal_time);
    signal_yellow = off;
}

void green(float signal_time)
{
    /*
     * ������� ��������� �������� �������
     * G0 -> HL1
     */
    signal_green = on;
    delay(signal_time);
    signal_green = off;
}

void red_and_yellow(float signal_time)
{
    /*
     * ������� ��������� � �������� � ������� �������
     */
    signal_red = on;
    yellow(signal_time);
    signal_red = off;
}

void flashing_yellow(float num_signal, float flashing_time)
{
    /*
     * ������� ��������� ������� �����
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
     * ������� ��������� �������� �����
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