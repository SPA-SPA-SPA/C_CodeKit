/*显示一个数字组成的阶梯，实际上是展示如何用printf函数把要显示的位数指定为变量*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    int x;

    printf("要显示多少行：");
    scanf("%d", &x);
    
    for(i = 1; i <= x; i++)
    {
        printf("%*d\n", i, i % 10);     // 就是这行，*号对应i，表示用至少i位数字表示 i%10。
    }
    
    return 0;
}
