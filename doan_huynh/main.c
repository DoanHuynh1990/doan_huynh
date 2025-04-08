#include <stdio.h>
#include <stdlib.h>


#include <stdio.h>

typedef union {
    unsigned short x;
    unsigned char y[2];  
} union_t;

void main() {
    union_t sv;
    sv.x = 0x1234;

    unsigned char low = sv.y[0];
    unsigned char high = sv.y[1];

    printf("Low  byte: 0x%02X\n", low);  
    printf("High byte: 0x%02X\n", high);  

 
}


