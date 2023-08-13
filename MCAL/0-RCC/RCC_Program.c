/******************************************************************************************
***********************************- RCC_Program.c                   **********************
***********************************-Created: Aug 12, 2023            **********************
***********************************-Author :Abderrahmane Lahouasna   **********************
***********************************-Version: 1                       **********************

******************************************************************************************/

/******************************************************************************************
*******************************guard of file will call on time in .c***********************
******************************************************************************************/
#include "RCC_private.h"
#include"BIT_MATH.h"
void MRCC_initSystemClk(void){
	/******************HSI*****************/
#if     CLKSRC == HSI
       /* 1-Enable HSI */
         SET_BIT(MRCC->CR,0u);
	   /*2-CLK_SYS ----->HSI */
         CLR_BIT(MRCC->CFGR,0u);
         CLR_BIT(MRCC->CFGR,1u);

		

	/******************HSE*****************/
#elif  CLKSRC == HSE
       #if HSE_SRC == CRYSTAL
	     /* 1- Enable HSE */
		  SET_BIT(MRCC->CR , 16U);
		 
		 /* 2- Disable Bybass */
		 CLR_BIT(MRCC->CR , 18U);
		 
		 /* 3- CLK_SYS -----> HSE */
	      SET_BIT(MRCC->CFGR , 0U);
		  CLR_BIT(MRCC->CFGR , 1U);
	   
	   
	   #elif HSE_SRC == RC
	     /* 1- Enable HSE */
	     SET_BIT(MRCC->CR , 16U);
	   
	     /* 2- Enable Bybass */
		 SET_BIT(MRCC->CR , 18U);  
		 
         /* 3- CLK_SYS -----> HSE */
	     SET_BIT(MRCC->CFGR , 0U);
	     CLR_BIT(MRCC->CFGR , 1U);
	   
	   #else
		 /* Error */  
        #endif	 
        
	/******************PLL*****************/
#elif  CLKSRC == PLL
       #if PLL_SRC == HSE_PLL
	      #if HSE_SRC == CRYSTAL
		  
	       /* Enable HSE */
	       SET_BIT(MRCC->CR , 16U);
	       /* 2- Disable Bybass */
		   CLR_BIT(MRCC->CR , 18U);
		   /* 3- HSE divider for PLL entry  */
		   CLR_BIT(MRCC->CFGR , 17U);
		   /* 4-PLL entry clock source */
		   SET_BIT(MRCC->CFGR , 16U);
		   /* 5- CLK_SYS -----> PLL */
	       CLR_BIT(MRCC->CFGR , 0U);
	       SET_BIT(MRCC->CFGR , 1U);
		   
		   #elif HSE_SRC == RC
		   /* Enable HSE */
		   SET_BIT(MRCC->CR , 16U);
		   /* 2- Enable Bybass */
		   SET_BIT(MRCC->CR , 18U);
		   /* 3- HSE divider for PLL entry  */
		   CLR_BIT(MRCC->CFGR , 17U);
		   /* 4-PLL entry clock source */
		   SET_BIT(MRCC->CFGR , 16U);
		   /* 5- CLK_SYS -----> PLL */
		   CLR_BIT(MRCC->CFGR , 0U);
		   SET_BIT(MRCC->CFGR , 1U);
		  
           	#else
				/*Error*/
            #endif				
	   
	   
	   
	   #elif PLL_SRC == HSI_PLL
	     /* 1-Enable HSI */
		  SET_BIT(MRCC->CR , 0U);
	     /* 2-PLL entry clock source */
	     CLR_BIT(MRCC->CFGR , 16U);
	   /* 3- CLK_SYS -----> PLL */ 
		 CLR_BIT(MRCC->CFGR , 0U);  
         SET_BIT(MRCC->CFGR , 1U);
      #else 
		  /*Error*/
#endif


   #else
  /*error*/
	
#endif // The end of Big IF


}
