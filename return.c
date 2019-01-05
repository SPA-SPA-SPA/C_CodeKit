/*---回车符\r使用示例：重写行---*/
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

/*回到本行开头，重新输出，若字符不够就用空白字符覆盖。看上去像是被重写了。*/
int main(int argc, char const *argv[])
{
    printf("My name is LJY.");
    fflush(stdout);
    
    sleep(2000);
    printf("\rHow are you?   ");
    fflush(stdout);

    sleep(2000);
    printf("\rSee you tomorrow.");
    fflush(stdout);

    return 0;
}
