/*会发出警报的格式输出*/

#include <stdio.h>
#include <stdarg.h>

/*---会发出警报的格式输出函数---*/
int aprintf(const char *format, ...)
{
    int count;
    va_list ap;         // 开始访问可变部分的参数

    putchar('\a');
    va_start(ap, format);
    count = vprintf(format, ap);

    va_end(ap);         // 结束访问可变部分的参数
    return count;
}

int main(int argc, char const *argv[])
{
    aprintf("Hello!\n");
    aprintf("%d %1d %.2f\n", 2, 3L, 3.14);
    return 0;
}
