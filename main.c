/**
  ******************************************************************************
  * @file    Button/main.c 
  * @author  Lobna KRIAA
  * @version V1.0.0
  * @date    27/04/2021
  * @brief   Main program body.
  ******************************************************************************
  * @copy
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2010 STMicroelectronics</center></h2>
  */ 

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"


/** @addtogroup Examples
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
GPIO_InitTypeDef GPIO_InitStructure;

/* Private function prototypes -----------------------------------------------*/
void Delay(__IO uint32_t nCount);

/* Private functions ---------------------------------------------------------*/
uint8_t  button_state; 
/**
  * @brief  Main program.
  * @param  None
  * @retval None
  */
int main(void)
{
  /*!< At this stage the microcontroller clock setting is already configured, 
       this is done through SystemInit() function which is called from startup
       file (startup_stm32f10x_xx.s) before to branch to application main.
       To reconfigure the default setting of SystemInit() function, refer to
       system_stm32f10x.c file
     */     
   
	
 /* GPIOs clock enable (for leds and button)*/
  RCC_APB2PeriphClockCmd(..................., ENABLE);  
 
  /* set GPIO's peripheral registers to their reset values */
  GPIO_DeInit(GPIOC);
	 GPIO_DeInit(..........);

  /* Initialize Leds LD3 and LD4 mounted on STM32VLDISCOVERY board */
   GPIO_InitStructure.GPIO_Pin = ...................... ;
  GPIO_InitStructure.GPIO_Mode = .........................;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz ;
  GPIO_Init(...........................);
	 
	 
	 /* Initialize Button Pin PA0 on STM32VLDISCOVERY board */
  GPIO_InitStructure.GPIO_Pin = ......................;
  GPIO_InitStructure.GPIO_Mode = .....................;
    
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz ;
  GPIO_Init(....................);


  
  while (1)
  {
		
 
		// test if the pin PA0 is pressed (use ReadInputDataBit function)
   if  (......................) 
	       { 
					 //set the green led and reset the blue one
					 GPIO_SetBits(....................); 
           GPIO_ResetBits(................);
		       
        }
	 else 
		   {  //set the blue led and reset the green one
					 GPIO_SetBits(........................); 
           GPIO_ResetBits(....................);
		       
        }
}
	}



#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{ 
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif



