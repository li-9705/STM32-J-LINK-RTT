#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
 
#include "PRINTF_DEBUG.h" 
/************************************************
 ALIENTEKս��STM32������ʵ��1
 �����ʵ�� 
 ����֧�֣�www.openedv.com
 �Ա����̣�http://eboard.taobao.com 
 ��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡSTM32���ϡ�
 ������������ӿƼ����޹�˾  
 ���ߣ�����ԭ�� @ALIENTEK
************************************************/


 int main(void)
 {	
     u8 cnt=0;
	delay_init();	    //��ʱ������ʼ��	  
	LED_Init();		  	//��ʼ����LED���ӵ�Ӳ���ӿ�
	while(1)
	{
		LED0=0;

		delay_ms(100);	 //��ʱ300ms
		LED0=1;
		delay_ms(100);	//��ʱ300ms
        
        PRINTF_Dbg("cnt = %d\n", cnt);                   //SWO��ӡ
        cnt++;

        
	}
 }


