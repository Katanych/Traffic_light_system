#include <libpic30.h>
#include "xc.h"
#include "setting.h"
#include "config.h"
#include "modes.h"


int main(void) 
{   
    unsigned int i = 0;
    while(1)
    {
        switch(i)
        {
            case 0: reduced_intensity_mode(); break;
            case 1: day_mode(); break;
            case 2: pedestrian_mode(); break;
            case 3: green_street_mode(); break;
        }
        i++;
        if (i > 3) { i = 0; }
    }
    
    return 0;
}
