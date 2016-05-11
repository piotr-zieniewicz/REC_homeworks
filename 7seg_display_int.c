#if defined (__USE_LPCOPEN)
#if defined(NO_BOARD_LIB)
#include "chip.h"
#else
#include "board.h"
#endif
#endif

#include <cr_section_macros.h>

int main(void) {

#if defined (__USE_LPCOPEN)

    SystemCoreClockUpdate();
#if !defined(NO_BOARD_LIB)

    Board_Init();
    // Set the LED to the state of "On"
    Board_LED_Set(0, true);
#endif
#endif

    int choice_digit = 2;
	
	// Set pins 10-17 as output
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 10);
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 11);
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 12);
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 13);
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 14);
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 15);
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 16);
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 17);

	// Selects the number to display
    switch(choice_digit)
    {
		//FALSE - segment ON or TRUE - segment OFF
		
    	case 0:
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, FALSE); //a
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, FALSE); //b
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, FALSE); //c
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, FALSE); //d
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, FALSE); //e
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, FALSE); //f
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, TRUE); //g
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, TRUE); //dp
			break;

			// Respectively a, b, c, d, e, f, g, dp on each case
			
    	case 1:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, TRUE);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, FALSE);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, FALSE);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, TRUE);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, TRUE);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, TRUE);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, TRUE);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, TRUE);
    		break;

    	case 2:
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, TRUE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, TRUE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, TRUE);
			break;

    	case 3:
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, TRUE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, TRUE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, TRUE);
			break;

    	case 4:
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, TRUE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, TRUE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, TRUE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, TRUE);
			break;

    	case 5:
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, TRUE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, TRUE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, TRUE);
			break;

    	case 6:
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, TRUE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, TRUE);
			break;

    	case 7:
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, TRUE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, TRUE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, TRUE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, TRUE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, TRUE);
			break;

    	case 8:
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, TRUE);
			break;

    	case 9:
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, TRUE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, FALSE);
			Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, TRUE);
			break;


    }

    volatile static int i = 0 ;

    while(1) {
        i++ ;
    }
    return 0 ;
}
