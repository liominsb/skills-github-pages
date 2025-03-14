#include<stdio.h>
int main(void)
{
    void sy1(char str[80]);
    void sy2(char str[],char ch);
    void sy3(char str[]);
    char c;
    char str[80];
    sy1(str);
    scanf("%c",&c);
    sy2(str,c);
    sy3(str);
    return 0;
}

#include<stdio.h>
void sy1(char str[80])
{
      fgets(str,80,stdin);
}

#include<stdio.h>
void sy2(char str[],char ch)
{
    int i,j;
    for(i=j=0;str[i]!='\0';i++)
    if(str[i]!=ch)
    str[j++]=str[i];
    str[j]='\0';
}

#include<stdio.h>
void sy3(char str[])
{
   printf("%s\n",str); 
}



