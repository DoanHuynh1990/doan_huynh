#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int led_check(char* input) {
    char* tu_khoa = "led_2: ";
    char* a = strstr(input, tu_khoa);
    
    a += strlen(tu_khoa); 
    if (a[0] == 'O' && a[1] == 'N') {
        return 1;
    }
    return 0;
}

int main() {

    char *str = "led_1: ON, led_2: ON, led_3: ON";
   

    printf("Test : %d\n", led_check(str)); 
 

   
}