/*用十六进制和二进制数显示字符串内部的字符*/
#include <ctype.h>
#include <stdio.h>
#include <limits.h>

/*---函数：用十六进制和二进制数显示字符串内部的字符---*/
/*明解C语言的作者为了在显示字符时，不受1个字节的位数的影响，使用(CHAR_BIT + 3) / 4 位表示十六进制，使用CHAR_BIT位表示
二进制。CHAR_BIT一般定义为8*/
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
