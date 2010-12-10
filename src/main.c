/*
 * ==============================================================
 *       Filename:  main.c
 *
 *    Description:  Main function to run my implementation of
 *                  secure hash algorithm (sechash). 
 *
 *        Version:  1.0
 *        Created:  11/29/2010 09:05:37 PM
 *       Modified:  12/09/2010 06:07:07 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jason Jones (), jsjones96@gmail.com
 *        Company:  J2Labs
 *
 * ==============================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "sec-hash.h"


/* 
 * ===  FUNCTION  ===============================================
 *         Name:  main
 *  Description:  Starts execution of the secure hash algorithm.
 *                Designed to take 0 or more command line
 *                arguments, which are the files to return the
 *                message digest for.  If no comand line
 *                arguments are provided, the algorithm reads
 *                from stdin.
 * ==============================================================
 */
int
main(int argc, char *argv[])
{
    if (argc > 1 ) {
        while (argc > 1) {
            sha_hash(argv[1]);
            argc--;
            argv++;
        }
    } else {
        sha_hash(NULL);
    }
    return EXIT_SUCCESS;
}
