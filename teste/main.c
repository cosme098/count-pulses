#include <main.h>

#INT_RTCC
void  RTCC_isr(void) 
{

}

#INT_TIMER2
void  TIMER2_isr(void) 
{

}

void main()
{
	setup_timer_0(RTCC_INTERNAL|RTCC_DIV_8|RTCC_8_bit);		//327 us overflow
	setup_timer_2(T2_DIV_BY_4,195,2);		//125 us overflow, 250 us interrupt


	enable_interrupts(INT_RTCC);
	enable_interrupts(INT_TIMER2);
	enable_interrupts(GLOBAL);

	while(TRUE)
	{
		//TODO: User Code
	}

}
