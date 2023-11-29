/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: Mohamed Zidan
 */
  #include<util/delay.h>
  #include"DOI_priv.h"
  #include"DataType.h"
  int main()
  {
    // DDRC=0xF0;
    // DDRD=0x03;
    DDRD|=(1<<6);
    DDRD|=(1<<7);
    DDRC|=(1<<4);
    DDRC|=(1<<5);
    DDRC|=(1<<6);
    DDRC|=(1<<7);
    u8 count=0;
    while(1)
    {
      for(count=0;count<100;count++)
      {
        for(u8 fix=0;fix<(300/20);fix++)
        {
          POV(count);
        }
      }
    }
  }

