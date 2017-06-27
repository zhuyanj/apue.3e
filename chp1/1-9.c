/*
 * =====================================================================================
 *
 *       Filename:  1-9.c
 *
 *    Description:  打印用户ID和组ID
 *
 *        Version:  1.0
 *        Created:  06/13/2017 06:48:28 PM
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
    printf("uid=%d, gid=%d\n", getuid(), getgid());
    exit(0);
}
