#include "function.h"
void my_delay(uint32_t time)
{
	for (uint32_t i = 0; i < time * 100000; i++)
	{
		
		
	}
}
void led_init_all(void)           
{

	uint32_t *pRccAhb1enr = (uint32_t *)0x40023830;         
	*pRccAhb1enr |= (1 << 3);						        
	uint32_t *pGpiodModeReg = (uint32_t *)0x40020C00;       
	
	*pGpiodModeReg |= (1 << (2 * LED_GREEN));      
	*pGpiodModeReg |= (1 << (2 * LED_ORANGE));      
	*pGpiodModeReg |= (1 << (2 * LED_RED));	         
	*pGpiodModeReg |= (1 << (2 * LED_BLUE));       
	led_off(LED_GREEN);	 // Green LED OFF
	led_off(LED_ORANGE); // Orange LED OFF
	led_off(LED_RED);	 // Red LED OFF
	led_off(LED_BLUE);	 // Blue LED OFF
}
void led_on(uint8_t led_no) // LED ON
{
	uint32_t *pGpiodDataReg = (uint32_t *)0x40020C14; 
	*pGpiodDataReg |= (1 << led_no);				 
}
void led_off(uint8_t led_no) // LED OFF
{
	uint32_t *pGpiodDataReg = (uint32_t *)0x40020C14; 
	*pGpiodDataReg &= ~(1 << led_no);				 
}
void button_init(void)
{
	uint32_t *pRccAhb1enr1 = (uint32_t *)0x40023830; 
	*pRccAhb1enr1 |= (1 << 0);						

	uint32_t *pGpioPuPdReg = (uint32_t *)0x4002000C; 
	*pGpioPuPdReg |= (1 << 1);						 
}
int button_count(void)
{
	button_init();
	int count = 0;
	uint32_t *pGpiodDataReg1 = (uint32_t *)0x40020010; 
	int sec = 10000000;
	while (sec--)
	{
		if ((*pGpiodDataReg1) & (1 << BLUE_BUTTON))
		{ 
			my_delay(200);
			count++;

			if (count > 4)
				count = 0;
		}
	}
	return count; 
}