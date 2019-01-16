/*程序名和程序形式参数的显示0*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    for(i = 0; i < argc; i++)
        printf("argv[%d] = \"%s\"\n", i, argv[i]);
    return 0;
}

// 在Windows10的powershell运行时，argv[0]的字符串是程序的完整的路径名称，而不仅仅是自身的名称。
