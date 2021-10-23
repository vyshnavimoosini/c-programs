/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int i,n;
char str1[100],str2[100];
printf("enter length of string:");
scanf("%d",&n);
printf("enter string:");
for(i=0;i<=n;i++)
{
    scanf("%c",&str1[i]);

    if((str1[i]>='a'&&str1[i]<='z')||(str1[i]>='A'&& str1[i]<='Z'))
{
    str2[i]=str1[i];
    printf("%c",str2[i]);
}
    
}

    return 0;
}
