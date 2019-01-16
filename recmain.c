/*main函数的递归调用*/
/*C语言可以这么做，但C++无法递归调用main函数，也无法获取main函数的地址*/
#include <stdio.h>

int main(void)      // 这里要写void，不接收任何参数，否则调用的时候又要给参数
{
    static int x = 5;
    static int v = 0;
    
    if (--x > 0) {
        printf("x      = %d\n", x);
        printf("main() = %d\n", main());
        v++;
        return v;
    }else{
        return 0;
    }
}
