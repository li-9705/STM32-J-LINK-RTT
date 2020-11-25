




#ifndef __PRINTF_H_
#define __PRINTF_H_

/*���ڿ������������Ϣ*/
#define PRINTF_DEBUG	1U
#define USE_RTT_PRINTF  1U

#if PRINTF_DEBUG
    #if USE_RTT_PRINTF
        #include "SEGGER_RTT.h"
        /*���� SEGGER_RTT ����������㣬���ģ���һЩ�����ַ�(�ŵ��ٶȿ�����ж��е���)*/
        #define   PRINTF_Dbg(...)     \
                        do{\
                            SEGGER_RTT_printf(0,"file:%s,line:%d,LOG:",__FILE__,__LINE__);\
                            SEGGER_RTT_printf(0,__VA_ARGS__);\
                          }while(0);
        
        #define   PRINTF(...)     \
                          SEGGER_RTT_printf(0,__VA_ARGS__);
    #else
    /*ʹ�ô��ڸ�ʽ���� printf ���*/
    #define  	PRINTF_Dbg(...)     \
                    do{\
                        printf("file:%s,line:%d,",__FILE__,__LINE__);\
                        printf(__VA_ARGS__);\
                      }while(0);
                      
    #define  	PRINTF(...)     \
                      printf(__VA_ARGS__);
    #endif                    
#else
    #define 	PRINTF_Dbg(...)
    #define  	PRINTF(...)
#endif

#endif



