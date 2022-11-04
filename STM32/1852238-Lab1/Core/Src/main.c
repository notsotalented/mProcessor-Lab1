/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */

  //Clear function
  void clearAllClock() {
	  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
	  HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
	  HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
	  HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
	  HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, RESET);
  }

  //Set segment on function
  void setNumberOnClock(int num) {
	  switch (num) {
	  case 0:
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
		  break;
	  case 1:
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
		  break;
	  case 3:
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		  break;
	  case 4:
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		  break;
	  case 5:
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		  break;
	  case 6:
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
		  break;
	  case 7:
		  HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, SET);
		  break;
	  case 8:
		  HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, SET);
		  break;
	  case 9:
		  HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, SET);
		  break;
	  case 10:
		  HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, SET);
		  break;
	  case 11:
		  HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
		  break;
	  }
  }

  //Set segment off function
  void clearNumberOnClock(int num) {
	  switch (num) {
	  case 0:
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		  break;
	  case 1:
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		  break;
	  case 3:
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		  break;
	  case 4:
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		  break;
	  case 5:
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		  break;
	  case 6:
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		  break;
	  case 7:
		  HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
		  break;
	  case 8:
		  HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
		  break;
	  case 9:
		  HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
		  break;
	  case 10:
		  HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
		  break;
	  case 11:
		  HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, RESET);
		  break;
	  }
  }

  //INIT to clear warnings
  clearAllClock();

  //INIT BEGIN CONDITION AKA SET HR:MIN:SEC
  int hour = 0;
  int min = 0;
  int sec = 0;

  //INIT HAND(S)
  setNumberOnClock(0); //HR
  //setNumberOnClock(11); //MIN
  //setNumberOnClock(3); //SEC


  //Detect change of minute hand (pmin)
  int pmin = 0;

  while (1)
  {
	//RESET SEC - RAISE PMIN FLAG
	if (sec == 61) {
		min++;
		sec = 0;
		pmin = 1;
	}

	//RESET MIN - CHANGE HR HAND
	if (min == 60) {
		hour++;
		min = 0;
		setNumberOnClock(hour); //Next seg
		clearNumberOnClock(hour - 1); //Clear previous seg
	}

	//RESET HR
	if (hour == 12) hour = 0;

	//WHEN MIN HAS CHANGED
	if (pmin == 1) {
		//The change is in range of 5 -> move hand
		if (min % 5 == 0) {
			setNumberOnClock(min/5);
			//Find out which hand to clear
			int cmin;
			if (min == 0) cmin = 11;
			else cmin = min / 5 - 1;
			//Condition to avoid clearing preoccupied segments
			if (cmin != hour && cmin != sec/5) {
				clearNumberOnClock(cmin);
			}
		}
		//Reset flag
		pmin = 0;
	}

	//RESET SEC
	if (sec % 5 == 0) {
		setNumberOnClock(sec/5);
		//Find out which hand to clear
		int csec = sec / 5 - 1;
		if (csec != hour && csec != min / 5) {
			clearNumberOnClock(csec);
		}
	}

	//Time progression every 1s
	HAL_Delay(1000);
	sec++;
    /* USER CODE END WHILE */


    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, SEG0_Pin|SEG1_Pin|SEG2_Pin|SEG3_Pin
                          |SEG4_Pin|SEG5_Pin|SEG6_Pin|SEG7_Pin
                          |SEG8_Pin|SEG9_Pin|SEG10_Pin|SEG11_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : SEG0_Pin SEG1_Pin SEG2_Pin SEG3_Pin
                           SEG4_Pin SEG5_Pin SEG6_Pin SEG7_Pin
                           SEG8_Pin SEG9_Pin SEG10_Pin SEG11_Pin */
  GPIO_InitStruct.Pin = SEG0_Pin|SEG1_Pin|SEG2_Pin|SEG3_Pin
                          |SEG4_Pin|SEG5_Pin|SEG6_Pin|SEG7_Pin
                          |SEG8_Pin|SEG9_Pin|SEG10_Pin|SEG11_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
