/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int a[100],i,j,n,temp=0;
printf("enter number of elements in array:");
scanf("%d",&n);
printf("enter elements in array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
     for(j=i+1;j<n;j++)
     {
         if(a[i]<a[j])
         {
             a[i]=a[i];
         }
         else
         {
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
     }
         
     }
 
     printf("%d ",a[i]);
 }
 
 return 0;
}
