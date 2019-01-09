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

/*---解释---
1. sleep 函数需要#include <time.h>的支持。
2. if((c2 = clock()) == (clock_t)(-1))
    return 0;
   1. 意思是若c2获取时钟数失败，sleep 函数回跳出循环，返回0.
   2. (clock_t)(-1) 是指将整数类型的 -1 强制转换为 clock_t 类型。
   3. 因为 clock() 的返回值是 clock_t 类型的，当 clock() 出错，会返回 clock_t 类型的 -1。
3. while(1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x); 判断从启动经过的时间是否大于等于x，若大于等于x，则结束循环。
   1. x 以毫秒为单位。
   2. c2 - c1 为经过的时钟数，除以 CLOCKS_PER_SEC 后得到经过的毫秒数。
   3. 因为 1秒 = 1000毫秒，所以表达式得到经过的毫秒数。
4. 当 sleep 函数正常结束，返回 1 。
5. 缺点：当持续的时间太长，clock_t 类型可能无法表示数值，因为所有类型都有一定的范围。
*/