#ifndef __COMMON_H__
#define __COMMON_H__	 
#include "sys.h"
#include "usart.h"		
#include "delay.h"	 	 	 	 	 
#include "lcd.h"  	  
#include "touch.h" 	 
#include "malloc.h"
#include "string.h"    
#include "usart2.h" 

u8 atk_8266_init(void);
u8 AP_Choose(void);
u8 Enter_AP_PWD(void);          // ����wifi���룬�������ּ���
u8 Load_Kb_Char(void);          // ������ĸ����
u8 KbNum_UI(u8 index);          // ���ּ���UI  index��0--��������     1--TCP_IP����
u8 KbChar_UI(u8 shift);         // ��ĸ����UI  shift��0--Сд      else--��д
u8 Enter_TCP_IP(void);          // ����wifi���룬�������ּ���

u8 atk_8266_mode_cofig(u8 netpro);
void atk_8266_at_response(u8 mode);
u8* atk_8266_check_cmd(u8 *str);
u8 atk_8266_apsta_check(void);
u8 atk_8266_send_data(u8 *data,u8 *ack,u16 waittime);
u8 atk_8266_send_cmd(u8 *cmd,u8 *ack,u16 waittime);
u8 atk_8266_quit_trans(void);
u8 atk_8266_consta_check(void);
void atk_8266_load_keyboard(u16 x,u16 y);
void atk_8266_key_staset(u16 x,u16 y,u8 keyx,u8 sta);
u8 atk_8266_get_keynum(u16 x,u16 y);
void atk_8266_get_wanip(u8* ipbuf);
void atk_8266_get_ip(u8 x,u8 y);
void atk_8266_msg_show(u16 x,u16 y,u8 wanip);
void atk_8266_wificonf_show(u16 x,u16 y,u8* rmd,u8* ssid,u8* encryption,u8* password);
u8 atk_8266_netpro_sel(u16 x,u16 y,u8* name);
void atk_8266_mtest_ui(u16 x,u16 y);

u8 atk_8266_ip_set(u8* title,u8* mode,u8* port,u8* ip);
void atk_8266_test(void);



u8 atk_8266_apsta_test(void);	//WIFI AP+STAģʽ����
u8 atk_8266_wifista_test(void);	//WIFI STA����
u8 atk_8266_wifiap_test(void);	//WIFI AP����

//�û����ò���
extern const u8* portnum;			 // ���Ӷ˿�
 
extern u8* wifista_ssid;		     // WIFI STA SSID
//extern const u8* wifista_encryption; // WIFI STA ���ܷ�ʽ
//extern u8* wifista_password; 	     // WIFI STA ����


extern const u8* ATK_ESP8266_CWMODE_TBL[3];
extern const u8* ATK_ESP8266_WORKMODE_TBL[3];
extern const u8* ATK_ESP8266_ECN_TBL[5];
#endif





