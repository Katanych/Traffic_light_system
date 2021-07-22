#include <libpic30.h>
#include "xc.h"
#include "control_panel.h"


void init();
void delay(float sec);

void red(float signal_time);
void yellow(float signal_time);
void green(float signal_time);

void red_and_yellow(float signal_time);
void flashing_yellow(float num_signal, float flashing_time);
void flashing_green(float num_signal, float flashing_time);
