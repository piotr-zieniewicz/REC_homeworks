#if defined (__USE_LPCOPEN)
#if defined(NO_BOARD_LIB)
#include "chip.h"
#else
#include "board.h"
#endif
#endif

#include <cr_section_macros.h>

#define TICKRATE_HZ (5)

void SysTick_Handler(void)
{
	Board_LED_Toggle(0);
	Board_LED_Toggle(2);
}

int main(void) {

#if defined (__USE_LPCOPEN)

    SystemCoreClockUpdate();
#if !defined(NO_BOARD_LIB)

    Board_Init();

    Board_LED_Set(0, true);
    Board_LED_Set(2, true);
#endif
#endif

    SysTick_Config(SystemCoreClock / TICKRATE_HZ);

    volatile static int i = 0 ;
    
    while(1) {

        i++ ;
    }
    return 0 ;
}