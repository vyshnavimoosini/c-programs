/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s[100];
    int i,l,count1=0,count2=0;
    printf("enter string length:");
    scanf("%d",&l);
    printf("enter string:");
    for(i=0;i<l;i++)
    {
        scanf("%c",&s[i]);
    }
    for(i=0;i<l;i++)
    {
       if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
       {
           count1++;
       }
      else
      {
          count2++;
      }
    }
    printf("count of vowels are %d\n",count1);
    printf("count of consonants are %d",count2);
    return 0;
}