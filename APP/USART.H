#ifndef __USART_DRV_H
#define __USART_DRV_H

#include "stm32f10x.h"
#include <stdio.h>

#define RX_BUFFER_SIZE 128   // 接收环形缓冲区大小

void USART1_Init(uint32_t baudrate);
void USART1_SendChar(char c);
void USART1_SendString(const char *str);

// printf 重定向
int fputc(int ch, FILE *f);

// 获取接收到的数据（非阻塞）
int USART1_GetChar(char *c);

#endif /* __USART_DRV_H */
