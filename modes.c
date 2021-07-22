#include "modes.h"


void reduced_intensity_mode()
{
    /* ������� ������ ��������� � ������ "��������� �������������"
     */
    
    init();
    flashing_yellow(NUM_ROUND_REDUCED_MODE, FLASHING_TIME);
}

void day_mode()
{
    /* ������� ������ ��������� � "�������" ������
     * ����� ������������� ������� �������� ����������
     * ���� ������� (FLASHING_YELLOW), ����� ����
     * �������� �������� ���� ������ � �������� �����.
     * ����� ����, ��� �� ������� RED_SIGNAL_TIME 
     * ������, � ��� ������ ���������� ������ ����, 
     * ����� ���� ��������� �������. ��� ������ �����
     * ������ �������� ����� ��������� � ����, �� ������
     * ������ � ����� ��������� ��������� ������ � �����
     * �������. ���� ������� ����� ����������� COUNT ���.
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
    /* ������� ������ ������� "��������" � ������ "�������" */
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
    /* ������� ������ ������� "��������" � ������ "������� �����" */
    init();
    green(SIGNAL_TIME_RED * NUM_ROUND_GREEN_STREET_MODE);
}