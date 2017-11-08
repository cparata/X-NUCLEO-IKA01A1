/**
 ******************************************************************************
 * @file    TSU124_def.h
 * @author  Central Labs
 * @version 1.0.0
 * @date    11-February-2016
 * @brief   Portable architecture for TSU104
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; COPYRIGHT(c) 2015 STMicroelectronics</center></h2>
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright notice,
 *      this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 *   3. Neither the name of STMicroelectronics nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 */


/* Define to prevent recursive inclusion -------------------------------------*/

#ifndef __TSU104_H
#define __TSU104_H

#ifdef __cplusplus
	extern "C" {
#endif


/* Includes ------------------------------------------------------------------*/

/* ACTION --------------------------------------------------------------------*
 * Include here interface specific header files.                              *
 *----------------------------------------------------------------------------*/		
#include "windcomp_def.h"


/* Definitions ---------------------------------------------------------------*/

/** @addtogroup BSP
 * @{
 */

/** @addtogroup Components
 * @{
 */  
  
/** @addtogroup tsz124
 * @{
 */
  
/** @defgroup tsz124_Exported_Defines tsz124_Exported_Defines
 * @{
 */
#ifndef NULL
	#define NULL                    (void *) 0
#endif
   
/**
 * @brief Device Address
 */
#define TSU104_ADDRESS       (0x10)

/* ACTION --------------------------------------------------------------------*
 * Put here the component's registers' addresses.                             *
 *----------------------------------------------------------------------------*/

/**
 * @brief Device identification register.
 * \code
 * Read
 * Default value: 0xXX
 * 7:0 This read-only register contains the device identifier.
 * \endcode
*/
#define TSU104_WHO_AM_I_ADDR (0x11)

/**
 * @brief Device Identifier. Default value of the WHO_AM_I register.
 */
#define I_AM_TSU104          ((uint8_t) (0x24))

#ifdef __cplusplus
	}
#endif
  
#endif /* __TSU104_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

