/*
 * Segment.c
 *
 *  Created on: ??�/??�/????
 *      Author: Mohamed Zidan
 */
#include<util\delay.h>
#include"DOI_priv.h"
#include"DataType.h"

void DisplayDecNum(u8 num)
{
  if(num<10)
  {
    PORTC&=~(1<<4);
    PORTC&=~(1<<5);
    PORTC&=~(1<<6);
    PORTC&=~(1<<7);

    PORTC|=(((num>>0)&1)<<4);
    PORTC|=(((num>>1)&1)<<5);
    PORTC|=(((num>>2)&1)<<6);
    PORTC|=(((num>>3)&1)<<7);
  }
}

void POV(u8 num)
{
        PORTD&=~(1<<6);
        PORTD&=~(1<<7);
        DisplayDecNum(num%10);
        PORTD|=(1<<6);
        _delay_ms(10);
        PORTD&=~(1<<6);

        DisplayDecNum(num/10);
        PORTD|=(1<<7);
        _delay_ms(10);
        PORTD&=~(1<<7);
}
