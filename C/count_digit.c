/*
Given a string S, consisting of alphabets and digits, find the frequency of each digit in the given string.
Input Format
The first line contains a string, num which is the given number.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int* nums = (int*) malloc(10 * sizeof(int)); // Creating a dynamic array.
    char c;
    
    for(int i = 0; i < 10; i++)
        *(nums+i) = 0;

    while(scanf("%c", &c) == 1)
        if(c >= '0' && c <= '9')
            (*(nums+(c-'0')))++;
    
    for(int i = 0; i < 10; i++)
        printf("%d ", *(nums+i)); 
    return 0;
}

