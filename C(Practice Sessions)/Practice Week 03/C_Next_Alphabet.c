#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c>=97 && c<122)
    {
        int ans=c+1;
        printf("%c",ans);
    }
    else if (c>=65 && c<90)
    {
        int ans=c+1;
        printf("%c",&c);
    }
    else if(c==122)
    {
        printf("%c",97);
    }
    else if(c==90)
    {
        printf("%c",65);
    }
    else
    {
        printf("%c",&c);
    }
    
    return 0;
}