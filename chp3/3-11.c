/*
 * =====================================================================================
 *
 *       Filename:  3-11.c
 *
 *    Description:  程序第1个参数指定文件描述符，并对该描述符打印其所选择的文件标志说明。
 *
 *        Version:  1.0
 *        Created:  06/21/2017 05:23:22 PM
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

int main(int argc, char *argv[])
{
    int val;

    if (argc != 2)
        err_quit("usage: a.out <descriptor#>");

    if ((val = fcntl(atoi(argv[1]), F_GETFL, 0)) < 0)
        err_sys("fcntl error for fd %d", atoi(argv[1]));

    switch (val & O_ACCMODE) {
    case O_RDONLY:
        printf("read only");
        break;
    case O_WRONLY:
        printf("write only");
        break;
    case O_RDWR:
        printf("read write");
        break;
    default:
        err_dump("unknown access mode");
    }

    if (val & O_APPEND)
        printf(", append");

    if (val &O_NONBLOCK)
        printf(", nonblocking");

    if (val & O_SYNC)
        printf(", synchronous writes");

    if (val & O_FSYNC)
        printf(", synchronous writes");

    putchar('\n');


    exit(0);
}
