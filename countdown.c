/*倒计时后显示程序运行时间*/

#include <time.h>
#include <stdio.h>

/*---等待x毫秒---*/
int sleep(unsigned long x)
{
    clock_t c1 = clock(), c2;
    
    do
    {
        if ((c2 = clock()) == (clock_t)-1) {        // 错误
            return 0;
        }
        
    } while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
    return 1;
}

int main(int argc, char const *argv[])
{
    int i;
    clock_t c;                  // clock()的返回类型也是clock_t
    
    for( i = 10; i > 0; i--)
    {
        printf("\r%2d", i);
        fflush(stdout);
        sleep(1000);
    }
    printf("\r\aFIRE!!\n");

    c = clock();                // clock()获得从程序启动后经过的时钟数
    printf("程序开始运行后经过了%.1f秒。\n", (double)c / CLOCKS_PER_SEC);       // (double)c / CLOCKS_PER_SEC是总时钟数除以每秒的时钟数，得到总共几秒。

    return 0;
}
