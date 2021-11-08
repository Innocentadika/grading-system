/*
project: Grading system
author: Innocent Mukovwa
date: 8 Nov, 2021
complier: GCC
language: C99
license: MIT

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;

    printf("Enter marks= ");
    scanf ("%d",&m);
    switch (m)
    {
        case 83 ... 100 : printf("Grade = A"); break;
        case 75 ... 82 : printf("Grade = A-"); break;
        case 69 ... 74 : printf("Grade = B+"); break;
        case 64 ... 68 : printf("Grade = B"); break;
        case 59 ... 63 : printf("Grade = B-"); break;
        case 54 ... 58 : printf("Grade = C+"); break;
        case 49 ... 53 : printf("Grade = C"); break;
        case 43 ... 48 : printf("Grade = C-"); break;

        default : printf("Enter the correct input");
    }
    return 0;
}
