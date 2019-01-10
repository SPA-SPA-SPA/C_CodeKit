/*用十六进制和二进制数显示字符串内部的字符*/
#include <ctype.h>
#include <stdio.h>
#include <limits.h>

/*---函数：用十六进制和二进制数显示字符串内部的字符---*/
void strdump(const char *s)
{
    
    while(*s){
        int i;
        unsigned char x = (unsigned char) *s;
        printf("%c  ", isprint(x) ? x : ' ');       // 字符
        printf("%0*x  ", (CHAR_BIT + 3) / 4, x);    // 十六进制
        
        for( i = CHAR_BIT - 1; i >= 0; i--)
        {
            putchar(((x >> i) & 1U) ? '1' : '0');
        }
        putchar('\n');
        s++;
    }
    
}

int main(int argc, char const *argv[])
{
    puts("汉字");    strdump("汉字");    putchar('\n');
    puts("12中国话AB");    strdump("12中国话AB");    putchar('\n');
    return 0;
}   
