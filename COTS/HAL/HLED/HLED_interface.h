/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  HLED_interface.h
 *       Module:  Led Peripheral
 *
 *  Description:  This file to interface Led 
 *                
 *                    
 *  
 *********************************************************************************************************************/

#ifndef  __HLED_interface_H__
#define  __HLED_interface_H__

/**********************************************************************************************************************
 *  GLOBAL MACROS
 *********************************************************************************************************************/

#define LED1        (0)
#define LED2        (1)
#define LED3        (2)


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**
 * @brief This Function to set pins of led as output
 * 
 * @param au8_Led 
 */
void hled_init(u8_t au8_Led);


/**
 * @brief This Function to Led on
 * 
 * @param au8_Led 
 */
void hled_ON (u8_t au8_Led); 


/**
 * @brief This Function to Led Off
 * 
 * @param au8_Led 
 */
void hled_OFF (u8_t au8_Led);


/**
 * @brief Thish Function to toogle Led
 * 
 * @param au8_Led 
 */
void hled_TOGGLE (u8_t au8_Led);


#endif  /* __HLED_interface_H__ */

/**********************************************************************************************************************
 *  END OF FILE: HLED_interface_H
 *********************************************************************************************************************/
