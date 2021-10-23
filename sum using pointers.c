/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int *p;
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    *p=a+b;
    printf("%d",*p);

    return 0;
}
