/*
 * =====================================================================================
 *
 *       Filename:  3-2.c
 *
 *    Description:  创建一个具有空洞的文件。
 *
 *        Version:  1.0
 *        Created:  06/14/2017 03:30:42 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "apue.h"
#include <fcntl.h>

char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";

int main(void)
{
    int fd;

    if ((fd = creat("file.hole", FILE_MODE)) < 0)
        err_sys("creat error");

    if (write(fd, buf1, 10) != 10)
        err_sys("buf1 write error");
    /*offset now = 10*/

    if (lseek(fd, 16384, SEEK_SET) == -1)
        err_sys("lseek error");
    /*offset now = 16384*/

    if (write(fd, buf2, 10) != 10)
        err_sys("buf2 write error");
    /*offset now = 16394*/
    
    exit(0);
}
