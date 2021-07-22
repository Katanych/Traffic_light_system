/* Config1 */
#pragma config WINDIS = OFF             // Окно сторожевого таймера (стандартный сторожевой таймер включен, (оконный режим отключен))
#pragma config FWDTEN = OFF             // Сторожевой таймер включить (сторожевой таймер отключен)
#pragma config ICS = PGx1               // Выбор канала связи (функции эмулятора совместно используются с PGEC1/PGED1)
#pragma config GWRP = OFF               // Защита от записи общего сегмента кода (разрешена запись в память программы)
#pragma config BKBUG = OFF
#pragma config GCP = ON                 // Общий сегмент кода защита кода (защита кода отлючена для всего пространства памяти программы)
#pragma config JTAGEN = OFF             // JTAG Port Enable (порт JTAG отключен)

/* Config2 */
#pragma config POSCMOD = XT             // Выбор основного генератора (выбран режим XT oscillator)
#pragma config I2C2SEL = PRI            // I2C 2 Pin Select bit (используйте стандартные контакты SCL2 / SDA2 для I2C 2)
#pragma config IOL1WAY = OFF            // IOLOCK One-Way Set Enable bit (Unlimited Writes To RP Registers)
#pragma config FCKSM = CSECME           // Переключение часов и мониторинг (включены как переключение часов, так и отказоустойчивый мониторинг часов)
#pragma config FNOSC = PRIPLL           // Генератор Select (первичный генератор (XT, HS, EC) с модулем PLL (XTPLL, HSPLL, ECPLL))
#pragma config IESO = ON                // Внутренний внешний режим переключения (режим IESO (двухскоростной запуск) включен)
