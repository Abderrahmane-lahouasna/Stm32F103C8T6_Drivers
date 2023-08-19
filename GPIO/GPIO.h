/******************************************************************************************
***********************************-GPIO.h                           **********************
***********************************-Created: Aug 19, 2023            **********************
***********************************-Author :Abderrahmane Lahouasna   **********************
***********************************-Version: 1                       **********************

******************************************************************************************/

/******************************************************************************************
*******************************guard of file will call on time in .c***********************
******************************************************************************************/

#ifndef GPIO_H_
#define GPIO_H_
#define GPIOA_base_adress       0x40010800UL
#define GPIOA_CRL_ofsset        0x00U
#define GPIOA_CRL               *((volatile unsigned long int *)GPIOA_base_adress + GPIOA_CRL_ofsset)
#define GPIOA_CRH_ofsset        0x04U                                                 
#define GPIOA_CRH               *((volatile unsigned long int *)GPIOA_base_adress + GPIOA_CRH_ofsset)
#define GPIOA_IDR_ofsset        0x08U                                                  
#define GPIOA_IDR               *((volatile unsigned long int *)GPIOA_base_adress + GPIOA_IDR_ofsset)
#define GPIOA_ODR_ofsset        0x0CU                                                  
#define GPIOA_ODR               *((volatile unsigned long int *)GPIOA_base_adress + GPIOA_ODR_ofsset)
#define GPIOA_BSRR_ofsset       0x10U                                                  
#define GPIOA_BSRR              *((volatile unsigned long int *)GPIOA_base_adress + GPIOA_BSRR_ofsset)
#define GPIOA_BRR_ofsset        0x14U                                                 
#define GPIOA_BRR               *((volatile unsigned long int *)GPIOA_base_adress + GPIOA_BRR_ofsset)
#define GPIOA_LCKR_ofsset       0x18U                                                 
#define GPIOA_LCKR              *((volatile unsigned long int *)GPIOA_base_adress + GPIOA_LCKR_ofsset)

typedef struct 
{
	volatile unsigned long int CRL;
	volatile unsigned long int CRH;
	volatile unsigned long int IDR;
	volatile unsigned long int ODR;
	volatile unsigned long int BSRR;
	volatile unsigned long int BRR;
	volatile unsigned long int LCKR;
}GPIOA_struct;

#define GPIOB_base_adress       0x40010C00UL
#define GPIOB_CRL_ofsset        0x00U
#define GPIOB_CRL               *((volatile unsigned long int *)GPIOB_base_adress + GPIOB_CRL_ofsset)
#define GPIOB_CRH_ofsset        0x04U                                                  
#define GPIOB_CRH               *((volatile unsigned long int *)GPIOB_base_adress + GPIOB_CRH_ofsset)
#define GPIOB_IDR_ofsset        0x08U                                                  
#define GPIOB_IDR               *((volatile unsigned long int *)GPIOB_base_adress + GPIOB_IDR_ofsset)
#define GPIOB_ODR_ofsset        0x0CU                                                  
#define GPIOB_ODR               *((volatile unsigned long int *)GPIOB_base_adress + GPIOB_ODR_ofsset)
#define GPIOB_BSRR_ofsset       0x10U                                                  
#define GPIOB_BSRR              *((volatile unsigned long int *)GPIOB_base_adress + GPIOB_BSRR_ofsset)
#define GPIOB_BRR_ofsset        0x14U                                                  
#define GPIOB_BRR               *((volatile unsigned long int *)GPIOB_base_adress + GPIOB_BRR_ofsset)
#define GPIOB_LCKR_ofsset       0x18U                                                 
#define GPIOB_LCKR              *((volatile unsigned long int *)GPIOB_base_adress + GPIOB_LCKR_ofsset)

typedef struct 
{
	volatile unsigned long int CRL;
	volatile unsigned long int CRH;
	volatile unsigned long int IDR;
	volatile unsigned long int ODR;
	volatile unsigned long int BSRR;
	volatile unsigned long int BRR;
	volatile unsigned long int LCKR;
}GPIOB_struct;

#define GPIOC_base_adress       0x40011000UL
#define GPIOC_CRL_ofsset        0x00U
#define GPIOC_CRL               *((volatile unsigned long int *)GPIOC_base_adress + GPIOC_CRL_ofsset)
#define GPIOC_CRH_ofsset        0x04U
#define GPIOC_CRH               *((volatile unsigned long int *)GPIOC_base_adress + GPIOC_CRH_ofsset)
#define GPIOC_IDR_ofsset        0x08U
#define GPIOC_IDR               *((volatile unsigned long int *)GPIOC_base_adress + GPIOC_IDR_ofsset)
#define GPIOC_ODR_ofsset        0x0CU
#define GPIOC_ODR               *((volatile unsigned long int *)GPIOC_base_adress + GPIOC_ODR_ofsset)
#define GPIOC_BSRR_ofsset       0x10U
#define GPIOC_BSRR              *((volatile unsigned long int *)GPIOC_base_adress + GPIOC_BSRR_ofsset)
#define GPIOC_BRR_ofsset        0x14U
#define GPIOC_BRR               *((volatile unsigned long int *)GPIOC_base_adress + GPIOC_BRR_ofsset)
#define GPIOC_LCKR_ofsset       0x18U
#define GPIOC_LCKR              *((volatile unsigned long int *)GPIOC_base_adress + GPIOC_LCKR_ofsset)

typedef struct 
{
	volatile unsigned long int CRL;
	volatile unsigned long int CRH;
	volatile unsigned long int IDR;
	volatile unsigned long int ODR;
	volatile unsigned long int BSRR;
	volatile unsigned long int BRR;
	volatile unsigned long int LCKR;
}GPIOC_struct;

#define GPIOD_base_adress       0x40011400UL
#define GPIOD_CRL_ofsset        0x00U
#define GPIOD_CRL               *((volatile unsigned long int *)GPIOD_base_adress + GPIOD_CRL_ofsset)
#define GPIOD_CRH_ofsset        0x04U                              
#define GPIOD_CRH               *((volatile unsigned long int *)GPIOD_base_adress + GPIOD_CRH_ofsset)
#define GPIOD_IDR_ofsset        0x08U                              
#define GPIOD_IDR               *((volatile unsigned long int *)GPIOD_base_adress + GPIOD_IDR_ofsset)
#define GPIOD_ODR_ofsset        0x0CU                               
#define GPIOD_ODR               *((volatile unsigned long int *)GPIOD_base_adress + GPIOD_ODR_ofsset)
#define GPIOD_BSRR_ofsset       0x10U                               
#define GPIOD_BSRR              *((volatile unsigned long int *)GPIOD_base_adress + GPIOD_BSRR_ofsset)
#define GPIOD_BRR_ofsset        0x14U                              
#define GPIOD_BRR               *((volatile unsigned long int *)GPIOD_base_adress + GPIOD_BRR_ofsset)
#define GPIOD_LCKR_ofsset       0x18U                              
#define GPIOD_LCKR              *((volatile unsigned long int *)GPIOD_base_adress + GPIOD_LCKR_ofsset)

typedef struct 
{
	volatile unsigned long int CRL;
	volatile unsigned long int CRH;
	volatile unsigned long int IDR;
	volatile unsigned long int ODR;
	volatile unsigned long int BSRR;
	volatile unsigned long int BRR;
	volatile unsigned long int LCKR;
}GPIOD_struct;
#define GPIOE_base_adress       0x40011800UL
#define GPIOE_CRL_ofsset        0x00U
#define GPIOE_CRL               *((volatile unsigned long int *)GPIOE_base_adress + GPIOE_CRL_ofsset)
#define GPIOE_CRH_ofsset        0x04U                              
#define GPIOE_CRH               *((volatile unsigned long int *)GPIOE_base_adress + GPIOE_CRH_ofsset)
#define GPIOE_IDR_ofsset        0x08U                             
#define GPIOE_IDR               *((volatile unsigned long int *)GPIOE_base_adress + GPIOE_IDR_ofsset)
#define GPIOE_ODR_ofsset        0x0CU                             
#define GPIOE_ODR               *((volatile unsigned long int *)GPIOE_base_adress + GPIOE_ODR_ofsset)
#define GPIOE_BSRR_ofsset       0x10U                               
#define GPIOE_BSRR              *((volatile unsigned long int *)GPIOE_base_adress + GPIOE_BSRR_ofsset)
#define GPIOE_BRR_ofsset        0x14U                               
#define GPIOE_BRR               *((volatile unsigned long int *)GPIOE_base_adress + GPIOE_BRR_ofsset)
#define GPIOE_LCKR_ofsset       0x18U                              
#define GPIOE_LCKR              *((volatile unsigned long int *)GPIOE_base_adress + GPIOE_LCKR_ofsset)

typedef struct 
{
	volatile unsigned long int CRL;
	volatile unsigned long int CRH;
	volatile unsigned long int IDR;
	volatile unsigned long int ODR;
	volatile unsigned long int BSRR;
	volatile unsigned long int BRR;
	volatile unsigned long int LCKR;
}GPIOE_struct;

#define GPIOF_base_adress       0x40011C00UL
#define GPIOF_CRL_ofsset        0x00U
#define GPIOF_CRL               *((volatile unsigned long int *)GPIOF_base_adress + GPIOF_CRL_ofsset)
#define GPIOF_CRH_ofsset        0x04U                               
#define GPIOF_CRH               *((volatile unsigned long int *)GPIOF_base_adress + GPIOF_CRH_ofsset)
#define GPIOF_IDR_ofsset        0x08U                             
#define GPIOF_IDR               *((volatile unsigned long int *)GPIOF_base_adress + GPIOF_IDR_ofsset)
#define GPIOF_ODR_ofsset        0x0CU                             
#define GPIOF_ODR               *((volatile unsigned long int *)GPIOF_base_adress + GPIOF_ODR_ofsset)
#define GPIOF_BSRR_ofsset       0x10U                              
#define GPIOF_BSRR              *((volatile unsigned long int *)GPIOF_base_adress + GPIOF_BSRR_ofsset)
#define GPIOF_BRR_ofsset        0x14U                               
#define GPIOF_BRR               *((volatile unsigned long int *)GPIOF_base_adress + GPIOF_BRR_ofsset)
#define GPIOF_LCKR_ofsset       0x18U                               
#define GPIOF_LCKR              *((volatile unsigned long int *)GPIOF_base_adress + GPIOF_LCKR_ofsset)

typedef struct 
{
	volatile unsigned long int CRL;
	volatile unsigned long int CRH;
	volatile unsigned long int IDR;
	volatile unsigned long int ODR;
	volatile unsigned long int BSRR;
	volatile unsigned long int BRR;
	volatile unsigned long int LCKR;
}GPIOF_struct;
#define GPIOG_base_adress       0x40012000UL
#define GPIOG_CRL_ofsset        0x00U
#define GPIOG_CRL               *((volatile unsigned long int *)GPIOG_base_adress + GPIOG_CRL_ofsset)
#define GPIOG_CRH_ofsset        0x04U                               
#define GPIOG_CRH               *((volatile unsigned long int *)GPIOG_base_adress + GPIOG_CRH_ofsset)
#define GPIOG_IDR_ofsset        0x08U                              
#define GPIOG_IDR               *((volatile unsigned long int *)GPIOG_base_adress + GPIOG_IDR_ofsset)
#define GPIOG_ODR_ofsset        0x0CU                              
#define GPIOG_ODR               *((volatile unsigned long int *)GPIOG_base_adress + GPIOG_ODR_ofsset)
#define GPIOG_BSRR_ofsset       0x10U                              
#define GPIOG_BSRR              *((volatile unsigned long int *)GPIOG_base_adress + GPIOG_BSRR_ofsset)
#define GPIOG_BRR_ofsset        0x14U                               
#define GPIOG_BRR               *((volatile unsigned long int *)GPIOG_base_adress + GPIOG_BRR_ofsset)
#define GPIOG_LCKR_ofsset       0x18U                              
#define GPIOG_LCKR              *((volatile unsigned long int *)GPIOG_base_adress + GPIOG_LCKR_ofsset)

typedef struct 
{
	volatile unsigned long int CRL;
	volatile unsigned long int CRH;
	volatile unsigned long int IDR;
	volatile unsigned long int ODR;
	volatile unsigned long int BSRR;
	volatile unsigned long int BRR;
	volatile unsigned long int LCKR;
}GPIOG_struct;
#define GPIOA              ((GPIOA_struct*) GPIOA_base_adress)
#define GPIOB              ((GPIOB_struct*) GPIOB_base_adress)
#define GPIOC              ((GPIOC_struct*) GPIOC_base_adress)
#define GPIOD              ((GPIOD_struct*) GPIOD_base_adress)
#define GPIOE              ((GPIOE_struct*) GPIOE_base_adress)
#define GPIOF              ((GPIOF_struct*) GPIOF_base_adress)
#define GPIOG              ((GPIOG_struct*) GPIOG_base_adress)
#endif /* GPIO_H_ */
