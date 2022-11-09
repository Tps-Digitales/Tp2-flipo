#include <Arduino.h>

#define PRENDER(PORT, PIN) (PORT |= 1 << PIN)
#define APAGAR(PORT, PIN) (PORT &= ~(1 << PIN))

#define bot1 ((PIND >> 4) & 0X01)
#define bot2 ((PIND >> 5) & 0x01)
#define bot3 ((PIND >> 6) & 0X01)
#define bot4 ((PIND >> 7) & 0X01)

int main(void)
{

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

  PORTD |= (1 << PD4);
  PORTD |= (1 << PD5);
  PORTD |= (1 << PD6);
  PORTD |= (1 << PD7);

  while (1)

    if (bot1 != 1){}

    {
      while (bot2 != 1);
      {
        {

          switch (1)
          {
          case 1:
            PRENDER(PORTB, PB4);
            break;

          case 2:
            PRENDER(PORTB, PB0);
            PRENDER(PORTB, PB1);
            break;

          case 3:
            PRENDER(PORTB, PB4);
            PRENDER(PORTB, PB0);
            PRENDER(PORTB, PB1);
            break;

          case 4:
            PRENDER(PORTD, PD2);
            PRENDER(PORTB, PB0);
            PRENDER(PORTB, PB1);
            PRENDER(PORTB, PB3);
            break;
          case 5:
            PRENDER(PORTD, PD2);
            PRENDER(PORTB, PB0);
            PRENDER(PORTB, PB1);
            PRENDER(PORTB, PB3);
            PRENDER(PORTB, PB4);
            break;

          case 6:
            PRENDER(PORTD, PD2);
            PRENDER(PORTD, PD3);
            PRENDER(PORTB, PB0);
            PRENDER(PORTB, PB1);
            PRENDER(PORTB, PB3);
            PRENDER(PORTD, PD4);
          }
        }
        while (bot3 != 1 || bot4 != 1)

        {
          APAGAR(PORTD, PD2);
          APAGAR(PORTD, PD3);
          APAGAR(PORTB, PB0);
          APAGAR(PORTB, PB1);
          APAGAR(PORTB, PB2);
          APAGAR(PORTB, PB3);
          APAGAR(PORTB, PB4);
        }
      }
    }
}// aprobame :)
