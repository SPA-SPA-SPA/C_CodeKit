#include <time.h>
#include <stdio.h>
#include <string.h>

/*---等待X秒---*/
int sleep (unsigned long x)
{
    clock_t c1 = clock();
    clock_t c2;
    do{
        if ((c2 = clock()) == (clock_t)(-1)) {
            return 0;
        }
    }while(1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
    return 1;
}

int main(int argc, char const *argv[])
{
    int i;
    char name[] = "LaiJunYu is going to be the richest and the strongest!";     // 要显示的字符串
    int name_len = strlen(name);                                                // 字符串的字符个数

    
    while(1){
        
        for( i = 0; i < name_len; i++)                      // 从头开始逐个显示字符
        {
            putchar(name[i]);
            fflush(stdout);
            sleep(100);
        }

        for(i=0; i < name_len; i++)                        // 从末尾开始逐个消除字符
        {
            printf("\b \b");
            fflush(stdout);
            sleep(100);
        }
    }
    return 0;
}
