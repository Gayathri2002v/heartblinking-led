#include <main.h>
//-----------------------------------------------------------------------------
void controled(char name,int1 value);
void on (void);
void off(void);
void onoff(void);
void effect1(void);
void effect2(void);
void effect3(void);
void effect4(void);
//-----------------------------------------------------------------------------
void main()
{

   while(TRUE)
   {
      //TODO: User Code
     onoff();
      effect1();
      effect2();
     effect3();
   effect4();
   }

}
//-----------------------------------------------------------------------------
void controled(char name,int1 value){
switch (name)
 {
      case 0:
      {
      output_bit(PIN_A4,value);
      break;
      }
      case 1:
      {
      output_bit(PIN_A0,value);
      break;
      }
       case 2:
      {
      output_bit(PIN_A1,value);
      break;
      }
       case 3:
      {
      output_bit(PIN_A2,value);
      break;
      }
       case 4:
      {
      output_bit(PIN_A3,value);
      break;
      }
       case 5:
      {
      output_bit(PIN_A5,value);
      break;
      }
       case 6:
      {
      output_bit(PIN_E0,value);
      break;
      }
       case 7:
      {
      output_bit(PIN_E1,value);
      break;
      }
       case 8:
      {
      output_bit(PIN_E2,value);
      break;
      }
       case 9:
      {
      output_bit(PIN_B0,value);
      break;
      }
       case 10:
      {
      output_bit(PIN_B1,value);
      break;
      }
        case 11:
      {
      output_bit(PIN_B2,value);
      break;
      }  
      case 12:
      {
      output_bit(PIN_B3,value);
      break;
      }
        case 13:
      {
      output_bit(PIN_B4,value);
      break;
      }
        case 14:
      {
      output_bit(PIN_B5,value);
      break;
      }
        case 15:
      {
      output_bit(PIN_B6,value);
      break;
      }
        case 16:
      {
      output_bit(PIN_B7,value);
      break;
      }
        case 17:
      {
      output_bit(PIN_C0,value);
      break;
      }
        case 18:
      {
      output_bit(PIN_C1,value);
      break;
      }
       case 19:
      {
      output_bit(PIN_C2,value);
      break;
      }
        case 20:
      {
      output_bit(PIN_C3,value);
      break;
      }
       case 21:
      {
      output_bit(PIN_C4,value);
      break;
      }
        case 22:
      {
      output_bit(PIN_C5,value);
      break;
      }
       case 23:
      {
      output_bit(PIN_C6,value);
      break;
      }
        case 24:
      {
      output_bit(PIN_C7,value);
      break;
      }
        case 25:
      {
      output_bit(PIN_D0,value);
      break;
      }
       case 26:
      {
      output_bit(PIN_D1,value);
      break;
      }
       case 27:
      {
      output_bit(PIN_D2,value);
      break;
      }
       case 28:
      {
      output_bit(PIN_D3,value);
      break;
      }
       case 29:
      {
      output_bit(PIN_D4,value);
      break;
      }
       case 30:
      {
      output_bit(PIN_D5,value);
      break;
      }
       case 31:
      {
      output_bit(PIN_D6,value);
      break;
      }
       case 32:
      {
      output_bit(PIN_D7,value);
      break;
      }
}

}
void on(void)

{
char i;
for(i=0;i<=32;i++)
{
 controled(i,1);
}


}
void off(void)

{
char i;
for(i=0;i<=32;i++)
{
 controled(i,0);
}

}

void onoff(void)
{
on();
delay_ms(300);
off();
delay_ms(300);
}

void effect1(void)
{
char i;
for(i=0;i<=16;i++)
{
controled(i,1);
controled(33-i,1);
delay_ms(100);
}
}
void effect2(void)
{
char i;
off();
delay_ms(300);
for(i=0;i<=16;i++)
{
controled(i,1);
controled(16+i,1);
delay_ms(50);
}
}

void effect3(void)
{
char i;
off();
delay_ms(300);
for(i=0;i<=32;i++)
{
controled(i,1);
delay_ms(50);
controled(i,0);
delay_ms(50);
}
}

void effect4(void)
{
char i;
for(i=0;i<=16;i++)
{
controled(i,1);

}
delay_ms(300);
off();
delay_ms(300);
for(i=16;i<=32;i++)
{
controled(i,1);

}
delay_ms(300);
off();
delay_ms(300);
}
