/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  MSYSTICK_interface.h
 *       Module:  System Timer
 *
 *  Description:  This file to interface System Timer 
 *               
 *                    
 *  
 *********************************************************************************************************************/

#ifndef __MSYSTICK_cfg_H__
#define __MSYSTICK_cfg_H__

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define TIMER_STOP                  (0x00000000)
#define TIMER_START                 (0x00000007)
#define INT_ENABLE                  (0x00000006)
#define CLEAR_VAL                   (0x00000000)

#define DEFAULT_1s                  (15999999)




#endif  /* __MSYSTICK_cfg_H__ */

/**********************************************************************************************************************
 *  END OF FILE: MTIMER_cfg_H
 *********************************************************************************************************************/
