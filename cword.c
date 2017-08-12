#include<stdio.h>
#include<string.h>
void main()
{
char s[200];
int count=0,i;
printf("Enter the string");
scanf("%d",s);
for(i=0;s[i]!=\0;i++)
{
if(s[i]==' ')
count++;
}
printf("enter the number of words in given string%d\n",count+1);
}
