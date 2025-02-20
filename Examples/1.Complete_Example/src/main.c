#include "aKaReZa.h"

const uint8_t customChar0[] = {0x00, 0x00, 0x0A, 0x00, 0x11, 0x0E, 0x00, 0x00};  // smiley
const uint8_t customChar1[] = {0x0E, 0x0E, 0x04, 0x0E, 0x15, 0x04, 0x0A, 0x0A};  // Robo
const uint8_t customChar2[] = {0x00, 0x00, 0x0A, 0x15, 0x11, 0x0E, 0x04, 0x00};  // Heart
const uint8_t customChar3[] = {0x00, 0x15, 0x15, 0x1F, 0x10, 0x10, 0x10, 0x00};  // Num 3

char alcd[17];

int main(void)
{
    alcd_init();
    alcd_customChar(0, customChar0);
    alcd_customChar(1, customChar1);
    alcd_customChar(2, customChar2);
    alcd_customChar(3, customChar3);

    alcd_gotoxy(0, 0);
    alcd_puts("Hello, World!");
    alcd_gotoxy(0, 1);
    alcd_puts("aKaReZa");

    alcd_gotoxy(8, 1); 
    alcd_putc(3); // Clock
    alcd_putc(2); // Heart
    alcd_putc(1); // Robo
    alcd_putc(0); // smiley  
    while(1)
    {
      alcd_backLight(true); /**< Turn the backlight on */
      delay_ms(1000);
      alcd_backLight(false); /**< Turn the backlight off */
      delay_ms(1000);   
    };
};
