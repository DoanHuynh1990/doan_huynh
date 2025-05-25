#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void tach_byte(unsigned short x) 
{
    unsigned char high = (x >> 8) & 0xFF; 
    unsigned char low = x & 0xFF;        

    printf("8 bit cao: %u (0x%02X)\n", high, high);
    printf("8 bit thap: %u (0x%02X)\n", low, low);
}
void main() {
    unsigned short value;
    printf("Nhap so 16-bit: ");
    scanf("%hu", &value);

    tach_byte(value);


}
