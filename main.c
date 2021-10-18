/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100],i,n,b[100],l=0;
    printf("enter no. of elements in array:");
    scanf("%d",&n);
    printf("enter elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[n-1];
    a[0]=l;
for(i=n-1;i>=0;i--)
{
    b[i]=a[i-1];
    printf("%d ",b[i]);
}
    return 0;
}
