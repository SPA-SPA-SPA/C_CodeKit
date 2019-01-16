/*程序名和程序形式参数的显示3：不使用argc来遍历argv*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    while(*argv)    // 当argv指向的值变成空指针时，控制表达式*argv的求值结果为0，while循环结束。不过注意，
        printf("argv[%d] = \"%s\"\n", i++, *argv++);    // 在一些不支持C语言标准库的环境中，argv指向的
    return 0;       // 数组的最后一个元素不能存储空指针。
}
