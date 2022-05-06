#include "helloworld.h"
#include "blinkled.h"
#include "dualcore.h"
#include "wifi.h"
#include "lcd_helloworld.h"
#include "prioritytask.h"
void app_main(void)
{
    helloworld();
    blinkled(); 
    dualcore(); 
    wifi();  
    lcd_helloworld();
    prioritytask();
}
