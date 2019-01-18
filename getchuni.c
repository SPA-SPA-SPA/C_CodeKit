/*getch的使用示例
在提供了Curses库的UNIX/Linux/OS X环境下运行。
运行的命令应该类似于：./getchuni
---以下资料来自百度百科---
curses是一个在Linux/Unix下广泛应用的图形函数库，作用是可以绘制在DOS下的用户界面和漂亮的图形。
在Ubuntu中安装curses可以使用如下命令：
sudo apt-get install libncurses5-dev
（如果发现找不到这个包，使用命令 sudo apt-get update 更新下包源）
编译时应加上链接语句-lcurses，如：gcc temp.c -o temp -lcurses*/

#include <curses.h>
#include <ctype.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ch;
    int retry;

    initscr();
    cbreak();
    noecho();
    refresh();
    
    do
    {
        printf("请按键。");
        fflush(stdout);

        ch = getch();

        printf("\n\r按下的键是%c，值是%d。\n\r", isprint(ch) ? ch : ' ', ch);       // \n在unix环境中只是光标移到下
        // 一行而已，而不会规定移到下一行的开头，所以要用\n\r移到下一行的开头，这样才和在Windows用\n一样。
        printf("再来一次？（Y/N）");
        fflush(stdout); /* 一般在输出换行符后，堆积在缓冲区未输出的字符就会显示在画面上，然而在使用Curses库却不是这样，
                            所以这里用fflush函数保证正常输出。*/
        retry = getch();
        if(isprint(retry))
            putchar(retry);
        putchar('\n');
        fflush(stdout);     // 同上
    } while (retry == 'Y' || retry == 'y');
    endwin();
    return 0;
}
