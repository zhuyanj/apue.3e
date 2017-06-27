/*
 * =====================================================================================
 *
 *       Filename:  1-7.c
 *
 *    Description:  read cmd from stdin, and then exec it. 
 *    1.input EOF(Ctrl+D),fgets return NULL pointer.
 *    2.every line return from fgets is end of \n
 * 
 *        Version:  1.0
 *        Created:  06/12/2017 07:54:24 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "apue.h"
#include <sys/wait.h>

int main(void)
{
    char buf[MAXLINE];  /*from apue.h */
    pid_t pid;
    int status;

    printf("%% ");      /*print prompt (printf requires %% to print %)*/
    while (fgets(buf, MAXLINE, stdin) != NULL) {
        if (buf[strlen(buf)-1] == '\n')
            buf[strlen(buf)-1] = 0;     /*replace newline with null*/

        if ((pid = fork()) < 0) {
            err_sys("fork error");
        } else if (pid == 0) {  /*child*/
            execlp(buf, buf, (char *)0);
            err_ret("couldn't execute: %s", buf);
            exit(127);
        }
        
        /* parent */
        if ((pid = waitpid(pid, &status, 0)) < 0)
            err_sys("waitpid error");
        printf("%% ");
    }
    exit(0);
}
