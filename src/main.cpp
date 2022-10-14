#include <Arduino.h>

#define bot1 ((PD4>>4)& 0X01)
#define bot1 ((PD4>>5)& 0X01)
#define bot1 ((PD4>>6)& 0X01)
#define bot1 ((PD4>>7)& 0X01)

#define prender(PORT, PIN) (PORT |= 1 << PIN)
#define apagar(PORT, PIN) (PORT &= 1 << PIN)

DDRD &= ~(1 << PD4);
DDRD &= ~(1 << PD5);
DDRD &= ~(1 << PD6);
DDRD &= ~(1 << PD7);


DDRD |= (1 << PD2);
DDRD |= (1 << PD3);
DDRB |= (1 << PB0);
DDRB |= (1 << PB1);
DDRB |= (1 << PB2);
DDRB |= (1 << PB3);
DDRB |= (1 << PB4);

int main()
  
while (1) 
