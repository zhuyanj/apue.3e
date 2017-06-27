/*
 * =====================================================================================
 *
 *       Filename:  1-8.c
 *
 *    Description:  函数strerror()和perror()使用方法。
 *    文件<errno.h>中定义了errno以及可以赋予它的各种常量。这些常量都以E开头。
 *    #include <stdio>
 *    char *strerror(int errnum);//将error映射为一个出错消息指针，并且返回字符串的指针
 *
 *    #include <stdio.h>
 *    void perror(const char *msg);//基于errno的当前值，在标准错误上产生一条出错消息，然后返回。
 *
 *        Version:  1.0
 *        Created:  06/12/2017 08:12:47 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "apue.h"
#include <errno.h>

int main(int argc, char *argv[])
{
    fprintf(stderr, "EACCES: %s\n", strerror(EACCES));
    errno = ENOENT;
    perror(argv[0]);
    exit(0);
}
