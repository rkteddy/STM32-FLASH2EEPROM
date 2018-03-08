#include <stdio.h>
#include "stm32f10x.h"
#include "eeprom.h"

int main()
{  
		u16 save_data = 100;
		u16 read_data;
	
		// ����Flash����
		STMFLASH_Write(0, (u16*)save_data, sizeof(save_data));
	
		// ��ȡFlash�б��������
		STMFLASH_Read(0, (u16*)read_data, sizeof(save_data));
	
		printf("The saved data is %d\n", read_data);
}
