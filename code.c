/*显示字符和字符编码*/
#include <ctype.h>
#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int i;
    for(i = 0; i <= CHAR_MAX; i++)
    {
        switch (i)
        {
            case '\a':
                printf("\\a");
                break;
            case '\b':
                printf("\\b");
                break;
            case '\f':
                printf("\\f");
                break;
            case '\n':
                printf("\\n");
                break;
            case '\r':
                printf("\\r");
                break;
            case '\t':
                printf("\\t");
                break;
            case '\v':
                printf("\\v");
                break;
            default:
                printf("%c", isprint(i) ? i : ' ');
                break;
        }
        printf("%02x\n", i);
    }
    return 0;
}
