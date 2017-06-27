/*
 * =====================================================================================
 *
 *       Filename:  3-5.c
 *
 *    Description: 只使用read和write函数复制一个文件。 
 *
 *        Version:  1.0
 *        Created:  06/19/2017 03:33:40 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "apue.h"

#define BUFFSIZE        4096

int main(void)
{
    int n;
    char buf[BUFFSIZE];

    while ((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0)
        if (write(STDOUT_FILENO, buf, n) != n)
            err_sys("write error");

    if (n < 0)
        err_sys("read error");

    exit(0);
}
