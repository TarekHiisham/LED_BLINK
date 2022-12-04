/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  MSYSCLK_interface.h
 *       Module:  System Clock
 *
 *  Description:  This file to interface System Clock 
 *               
 *                    
 *  
 *********************************************************************************************************************/

#ifndef __MSYSCLK_interface_H__
#define __MSYSCLK_interface_H__


/**********************************************************************************************************************
 *  GLOBAL MACROS
 *********************************************************************************************************************/
#define PORTA                   (0)
#define PORTB                   (1)
#define PORTC                   (2)
#define PORTD                   (3)
#define PORTE                   (4)
#define PORTF                   (5)


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void msysclk_init(void);

void msysclk_EnableGPIO(u8_t au8_Portx);

#endif  /* __MSYSCLK_interface_H__ */

/**********************************************************************************************************************
 *  END OF FILE: MSYSCLK_interface_H
 *********************************************************************************************************************/
