# 我的C语言代码收藏

|源文件|详情|
|---|---|
|backspace.c|退格符\\b用来制造动画效果。|
|return.c|回车符\\r用于重写行。|
|countdown.c|clock()函数获取程序启动后经过的时间的例子：倒数。|
|sleep_function.c|function意思是函数，所以这是一个带有解释的函数源文件。暂停一段较短的时间，以毫秒为单位。|
|ssleep_function.c|暂停一段较长的时间，以秒为单位。|
|elastic.c|让字符串的字符逐个显示并消除，重复。elastic有伸缩的意思。|
|telop1.c|字符串会像字幕一样滚动显示。（从左到右）|
|telop2.c|字符串会像字幕一样滚动显示。（从右到左）|
|stair.c|显示一个由数字0~9组成的阶梯，实际上是展示如何用printf函数把要显示的位数指定为变量。|
|code.c|以十六进制显示所有字符的值或者说编码。|
|strdump.c|用十六进制和二进制数显示字符串内部的字符，字符串已经写进程序里了。|
|wchar.c|宽字符的使用示例。|
|asctime2.c|asctime函数不换行版。以字符串形式输出当前的日期和时间。|
|ctime2.c|ctime函数不换行版。直接调用asctime2函数即可。|
|argtest.c|普通方式遍历argv|
|argtest1.c|通过指针以字符串为单位遍历argv|
|argtest2.c|通过指针以字符为单位遍历argv|
|argtest3.c|不使用argc来遍历argv|
|recmain.c|main函数调用main函数的示例。|
|getchwin.c|visual C++编程环境（一般是Windows环境）中特有的getch和putch函数的示例。|
|getchuni.c|UNIX和Linux通过Curses库来提供getch函数。是在UNIX/Linux/OS X实现和getchwin.c一样的功能的一个示例。|
|getputch.h|getchwin和getchuni的统一，一个能吸收两个环境的差异的通用库。|
|vsum.c|制作自己的作用于接受可变参数的函数的示例|
|aprintf.c|vprintf函数的使用示例|