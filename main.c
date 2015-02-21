#include <stdio.h>
#include "stm32f10x.h"
#include "eeprom.h"

int main()
{  
		u16 save_data = 100;
		u16 read_data;
	
		// 保存Flash配置
		STMFLASH_Write(0, (u16*)save_data, sizeof(save_data));
	
		// 读取Flash中保存的配置
		STMFLASH_Read(0, (u16*)read_data, sizeof(save_data));
	
		printf("The saved data is %d\n", read_data);
}
