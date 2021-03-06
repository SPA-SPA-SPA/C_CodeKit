/*字符串会像字幕一样滚动显示（从右到左）*/
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
    int cnt = 0;
    char name[] = "LaiJunYu is going to be stronger! ";           // 最后有一个空白字符，注意不是说空字符'\0'
    int name_len = strlen(name);
    
    while(1){
        putchar('\r');                  // 把光标移到开头
        
        for( i = 0; i < name_len; i++)
            if (cnt + i < name_len) 
                putchar(name[cnt + i]);
            else
                putchar(name[cnt + i - name_len]);
            /*if...else...可以改成putchar(name[(cnt + i) % name_len]);，但i最后会超出整数的范围。*/
        fflush(stdout);
        sleep(500);
        
        if (cnt > 0)         // 对比telop1.c，修改了这里
            cnt--;
        else
            cnt = name_len - 1;
    }
    return 0;
}
