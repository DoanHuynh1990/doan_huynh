#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int Len(char* str)
{
    int diem = 0;
    while (str[diem] != 0)
    {
        diem++;

    }
    return diem;
}


char VitriC(char* str,char c)
{
    int len_chuoi = Len(str);
    for (int i = 0; i < len_chuoi; i++)
    {
        if (str[i] == c) {
            return str + i;
        }
          
    }
    return 0;
          
}


void main()
{
    char str[] = "xin chao moi nguoi";
   
   int x = VitriC(str,'n');
   printf("%d", x);
       
}	
