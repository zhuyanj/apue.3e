/*
 * =====================================================================================
 *
 *       Filename:  3-1.c
 *
 *    Description:  测试对其标准输入能否设置偏移量。
 *
 *        Version:  1.0
 *        Created:  06/13/2017 08:19:01 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "apue.h"

int main(void)
{
    if (lseek(STDIN_FILENO, 0, SEEK_CUR) == -1)
        printf("cannot seek\n");
    else
        printf("seek OK\n");

    exit(0);
}

