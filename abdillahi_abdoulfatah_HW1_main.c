#include <stdio.h>
#include <string.h>

/**************************************************************
* Class:  CSC-415-0# Summer 2022
* Name: Abdoulfatah Abdillahi
* Student ID: 921623492
* GitHub Name: Abdoul1996
* Project: Assignment 1 – Command Line Arguments
*
* File: <abdillahi_abdoulfatah_HW1_main.c>
*
* Description: This project is to practice C program that displaying the numner of arguments 
                from the command line and listing each one on console.
*
**************************************************************/

int main( int argc, char* argv[]){                                           // argc: it's an argument that stores the number of command lines argument
                                                                              // argv: It's an argument vector(Array) that liste all the arguments 
    printf("There were %d arguments on the command line.\n", argc);

    for(int i =0; i <argc; i++)
    {
        printf("argument %d: %s\n", i, argv[i]);               // printf is displaying the number of arguments from the command line and it's listing each one on the console
    }
}


