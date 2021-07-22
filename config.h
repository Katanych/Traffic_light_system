/* Config1 */
#pragma config WINDIS = OFF             // ���� ����������� ������� (����������� ���������� ������ �������, (������� ����� ��������))
#pragma config FWDTEN = OFF             // ���������� ������ �������� (���������� ������ ��������)
#pragma config ICS = PGx1               // ����� ������ ����� (������� ��������� ��������� ������������ � PGEC1/PGED1)
#pragma config GWRP = OFF               // ������ �� ������ ������ �������� ���� (��������� ������ � ������ ���������)
#pragma config BKBUG = OFF
#pragma config GCP = ON                 // ����� ������� ���� ������ ���� (������ ���� �������� ��� ����� ������������ ������ ���������)
#pragma config JTAGEN = OFF             // JTAG Port Enable (���� JTAG ��������)

/* Config2 */
#pragma config POSCMOD = XT             // ����� ��������� ���������� (������ ����� XT oscillator)
#pragma config I2C2SEL = PRI            // I2C 2 Pin Select bit (����������� ����������� �������� SCL2 / SDA2 ��� I2C 2)
#pragma config IOL1WAY = OFF            // IOLOCK One-Way Set Enable bit (Unlimited Writes To RP Registers)
#pragma config FCKSM = CSECME           // ������������ ����� � ���������� (�������� ��� ������������ �����, ��� � ���������������� ���������� �����)
#pragma config FNOSC = PRIPLL           // ��������� Select (��������� ��������� (XT, HS, EC) � ������� PLL (XTPLL, HSPLL, ECPLL))
#pragma config IESO = ON                // ���������� ������� ����� ������������ (����� IESO (�������������� ������) �������)
