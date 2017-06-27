/*
 * =====================================================================================
 *
 *       Filename:  ascii.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/16/2017 05:56:17 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <curses.h>
int main(void)
{
    char c;
    while (1)
    {
/*        initscr();*/
        c = getchar();
        if (c >= 0)
        printf("%c : %d\n", c, c);
/*        endwin();*/
    }

    return 0;
}
