#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

int led_check(char* input) {
    if (strstr(input, "led_2: OFF"))  {
        return 1;
    }
    return 0;
}

void main() {
    char* str = "led_1: ON,led_2: OFF, led_3: ON";
   

    printf("KQ: %d\n", led_check(str)); 
    

    return 0;
}