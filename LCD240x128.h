/*
    LCD�Ҳ� �ϥ�LPT �ؤo:240x128 pixel
    1.�g�@����30*128=3840��BYTE (�@�C240pixel��30��BYTE,�@128�C)
*/
//----------------------------------------------------------------------
#ifndef LCD240x128H
#define LCD240x128H

#include "pthread.h"
//----------------------------------------------------------------------
class LCD240x128
{
    public:
      LCD240x128 (void);
      ~LCD240x128 (void);

      bool GetAuthority(unsigned long);                                         //�o�챱���v
      bool ReleaseAuthority(void);                                              //���񱱨��v
      bool CLEAR(void);                                                         //�M�����
      bool GRAPHIC_MODE(void);                                                  //�����ܹϫ��Ҧ�
      bool CHARACTER_MODE(void);                                                //�����ܤ�r�Ҧ�

      bool DISPLAY_GRAPHIC(unsigned int,unsigned char *,int,int);               //���GRAPHIC(���`���)
      bool DISPLAY_GRAPHIC_XY(int,int,unsigned char *,int,int);                 //���GRAPHIC(���`���)
      void DISPLAY_GRAPHICFULL_SPECIAL1(unsigned char *);                       //���GRAPHIC(�㭱:����ĪG)
      void DISPLAY_GRAPHICFULL_SPECIAL2(unsigned char *);                       //���GRAPHIC(�㭱:�ѥk�ܥ���ܮĪG)
      void DISPLAY_GRAPHICFULL_SPECIAL3(unsigned char *);                       //���GRAPHIC(�㭱:�ѥk�ܥ����i�ĪG)


    private:

      pthread_mutex_t mutexLcd;                                                 //�O�@�O����
      int lcdWidth;                                                             //LCD���O���e
      int lcdHeight;                                                            //LCD���O����
      unsigned long DATA_PORT;                                                  //IO��m:DATA PORT
      unsigned long CONTROL_PORT;                                               //IO��m:CONTROL PORT
      bool haveGetPower;                                                        //�O�_��o����LPT���v��
      unsigned char defaultSignal;                                              //��LPT�W���T��
      unsigned char temp;

      void WRITE_PORT(unsigned char,unsigned char);                             //�gPort
      void CURSOR(unsigned int);                                                //�w��
      unsigned char Invert(unsigned char);                                      //�NBitmap�ഫ���O�I

      void SPECIAL1(int,unsigned char *);                                       //���GRAPHIC(�㭱:����ĪG)
      void SPECIAL2(int,unsigned char *);                                       //���GRAPHIC(�㭱:�ѥk�ܥ���ܮĪG)
      void SPECIAL3(int,unsigned char *);                                       //���GRAPHIC(�㭱:�ѥk�ܥ����i�ĪG)
};
//-------------------------------------------------------------------
extern LCD240x128 lcd240x128;
#endif