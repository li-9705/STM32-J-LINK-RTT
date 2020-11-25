#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
 
#include "PRINTF_DEBUG.h" 
/************************************************
 ALIENTEK战舰STM32开发板实验1
 跑马灯实验 
 技术支持：www.openedv.com
 淘宝店铺：http://eboard.taobao.com 
 关注微信公众平台微信号："正点原子"，免费获取STM32资料。
 广州市星翼电子科技有限公司  
 作者：正点原子 @ALIENTEK
************************************************/


 int main(void)
 {	
     u8 cnt=0;
	delay_init();	    //延时函数初始化	  
	LED_Init();		  	//初始化与LED连接的硬件接口
	while(1)
	{
		LED0=0;

		delay_ms(100);	 //延时300ms
		LED0=1;
		delay_ms(100);	//延时300ms
        
        PRINTF_Dbg("cnt = %d\n", cnt);                   //SWO打印
        cnt++;

        
	}
 }


