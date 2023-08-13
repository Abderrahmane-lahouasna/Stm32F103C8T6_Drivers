/******************************************************************************************
***********************************- RCC_PRIVATE.h                     **********************
***********************************-Created: Aug 12, 2023            **********************
***********************************-Author :Abderrahmane Lahouasna   **********************
***********************************-Version: 1                       **********************

******************************************************************************************/

/******************************************************************************************
*******************************guard of file will call on time in .c***********************
******************************************************************************************/
#include"STD_Types.h"
#ifndef RCC_PRIVATE_H_
#define RCC_PRIVATE_H_
#define RCC_base_adress             (0x40021000UL)
#define RCC_CR_ofsset               (0x00U)
#define RCC_CR                      *((volatile u32*)(RCC_base_adress + RCC_CR_ofsset))
#define RCC_CFGR_ofsset             (0x04U)
#define RCC_CFGR                    *((volatile u32*)(RCC_base_adress + RCC_CFGR_ofsset))
#define RCC_CIR_ofsset              (0x08U)
#define RCC_CIR                     *((volatile u32*)(RCC_base_adress + RCC_CIR_ofsset))
#define RCC_APB2RSTR_ofsset         (0x0CU)
#define RCC_APB2RSTR                *((volatile u32*)(RCC_base_adress + RCC_APB2RSTR_ofsset))
#define RCC_APB1RSTR_ofsset         (0x10U)
#define RCC_APB1RSTR                *((volatile u32*)(RCC_base_adress + RCC_APB1RSTR_ofsset))
#define RCC_AHBENR_ofsset           (0x14U)
#define RCC_AHBENR                  *((volatile u32*)(RCC_base_adress + RCC_AHBENR_ofsset))
#define RCC_APB2ENR_ofsset          (0x18U)
#define RCC_APB2ENR                 *((volatile u32*)(RCC_base_adress + RCC_APB2ENR_ofsset))
#define RCC_APB1ENR_ofsset          (0x1CU)
#define RCC_APB1ENR                 *((volatile u32*)(RCC_base_adress + RCC_APB1ENR_ofsset))
#define RCC_BDCR_ofsset             (0x20U)
#define RCC_BDCR                    *((volatile u32*)(RCC_base_adress + RCC_BDCR_ofsset))
#define RCC_CSR_ofsset              (0x24U)
#define RCC_CSR                     *((volatile u32*)(RCC_base_adress + RCC_CSR_ofsset))
typedef struct 
{
volatile u32 CR       ;  //RCC_base_adress + RCC_CR_ofsset        (0x00U)
volatile u32 CFGR     ;  //RCC_base_adress + RCC_CFGR_ofsset      (0x04U)
volatile u32 CIR      ;  //RCC_base_adress + RCC_CIR_ofsset       (0x08U)
volatile u32 APB2RSTR ;  //RCC_base_adress + RCC_APB2RSTR_ofsset  (0x0CU)
volatile u32 APB1RSTR ;  //RCC_base_adress + RCC_APB1RSTR_ofsset  (0x10U)
volatile u32 AHBENR   ;  //RCC_base_adress + RCC_AHBENR_ofsset    (0x14U)
volatile u32 APB2ENR  ;  //RCC_base_adress + RCC_APB2ENR_ofsset   (0x18U)
volatile u32 APB1ENR  ;  //RCC_base_adress + RCC_APB1ENR_ofsset   (0x1CU)
volatile u32 BDCR     ;  //RCC_base_adress + RCC_BDCR_ofsset      (0x20U)
volatile u32 CSR      ;  //RCC_base_adress + RCC_CSR_ofsset       (0x24U)	
}RCC_TDef;

#define MRCC     ((RCC_TDef*)RCC_base_adress)
 







#endif /* RCC_PRIVATE_H_ */
