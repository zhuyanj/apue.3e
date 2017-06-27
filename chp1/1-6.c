/*
 * =====================================================================================
 *
 *       Filename:  1-6.c
 *
 *    Description:  print process id
 *
 *        Version:  1.0
 *        Created:  06/12/2017 07:51:01 PM
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
        printf("hello world from process ID %ld\n", (long)getpid());
        exit(0);
}
