/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int a[100],i,n;
int *p;
printf("enter number of elements in array:");
scanf("%d",&n);
printf("enter elements in array:");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    p=&a[i];
    printf("%d ",*p);
}
    return 0;
}
