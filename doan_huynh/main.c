#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


DWORD WINAPI function_1(_In_ LPVOID lpParameter)
{
    while (1) {
        printf("funtion is running...\n");
        Sleep(1000);

    }
}

DWORD WINAPI function_2(_In_ LPVOID lpParameter)
{
    while (1) {
        printf("funtion is running...\n");
        Sleep(500);

    }

}

void main() {
    HANDLE thread_1= CreateThread(NULL,1024,function_1,NULL,0,NULL);
    HANDLE thread_2 = CreateThread(NULL, 1024, function_2, NULL, 0, NULL);
    int cnt = 0;

    while (1) 
    {
        printf("main is running...\n");
        Sleep(1000);
        if (cnt++ == 5) 
        {
            SuspendThread(thread_1);
            SuspendThread(thread_2);

        }
    }
 }


