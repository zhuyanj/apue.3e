/*
 * =====================================================================================
 *
 *       Filename:  1-5.c
 *
 *    Description: copy stdin to stdout 
 *
 *        Version:  1.0
 *        Created:  06/12/2017 07:43:56 PM
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
        int c;

        while ((c = getc(stdin)) != EOF)
            if (putc(c, stdout) == EOF)
                err_sys("output error");

        if (ferror(stdin))
            err_sys("input error");

        exit(0);
}
