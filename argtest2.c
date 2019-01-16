/*程序名和程序形式参数的显示2：通过指针以字符为单位遍历argv*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    char c;
    
    while(argc-- > 0){
        printf("argv[%d] = \"", i++);
        while(c = *(*argv)++)
            putchar(c);
        argv++;
        printf("\"\n");
    }
    
    return 0;
}
