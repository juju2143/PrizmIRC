#include <fxcg/display.h>
#include <fxcg/keyboard.h>
#include <fxcg/misc.h>
#include <string.h>

int h=150;
int w=0;
int x=0;

void disp(const char* str,int color)
{
  unsigned short* ram = GetVRAMAddress();
  memcpy(ram+(LCD_WIDTH_PX*24),ram+(LCD_WIDTH_PX*34),LCD_WIDTH_PX*2*150);
  h=150;
  w=0;
  PrintMiniMini(&w,&h,"                                                  ",0,color,0);
  w=0;
  PrintMiniMini(&w,&h,str,0,color,0);
}

int main()
{
  int key;

  //EnableStatusArea(3);
  //DefineStatusMessage((char*)"what is this really",1,0,0);
  //DisplayStatusArea();

  int f[] = {0x0408,0x0409,0x040A,0x040B,0x040C,0x048C};
  int iresult;
  for(int i=0; i<6; i++)
  {
    GetFKeyPtr(f[i], &iresult);
    FKey_Display(i, (int*)iresult);
  }

  disp("Test",0);
  
  while(1)
  {
    GetKey(&key);
    if(key>0)
    {
      x++;
      char res[8];
      itoa(key,(unsigned char*)res);
      disp(res,0);
    }
  }
}

