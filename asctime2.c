/*---根据asctime函数把分解时间转换为字符串（不添加换行符）---*/
char *asctime2(const struct tm *timeptr)
{
    const char wday_name[7][3] = {                      // 星期
        "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"
    };
    const char mon_name[12][3] = {                      // 月份
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    static char result[25];             // 因为这个result数组是在调用函数后才产生的，所以如果不用静态存储期，
                                        // 在函数调用完后，result数组存储空间就会消失，函数返回的result地址也没用了
    sprintf(result, "%.3s %.3s %02d:%02d:%02d %4d", 
                    wday_name[timeptr->tm_wday], mon_name[timeptr->tm_mon],
                    timeptr->tm_mday, timeptr->tm_hour, timeptr->tm_min, 
                    timeptr->tm_sec, timeptr->tm_year + 1900);
    return result;
}