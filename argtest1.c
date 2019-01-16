/*程序名和程序形式参数的显示1：通过指针以字符串为单位遍历argv*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    while(argc-- > 0)
        printf("argv[%d] = \"%s\"\n", i++, *argv++);
    return 0;
}
