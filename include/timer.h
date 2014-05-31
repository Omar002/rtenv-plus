#ifndef TIMER__H_
#define TIMER__H_
/* Includes */
#include "stm32f4xx.h"
#include "stm32f4xx_syscfg.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_exti.h"
#include "misc.h"
#include "stm32f4xx_tim.h"

void TIMER_cfg();
void EnableTimerInterrupt();
void EXTILine0_Config();
void TIM2_IRQHandler();
void EXTI3_IRQHandler();

#endif
