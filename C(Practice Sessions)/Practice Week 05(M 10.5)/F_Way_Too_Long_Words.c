#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    char a[101];
    for(int i=0;i<T;i++)
    {
        scanf("%s",&a);
    
    int len=strlen(a);
    if(len <= 10)
    {
        printf("%s\n",a);
    }
    else
    {
        printf("%c%d%c\n",a[0],len-2,a[len-1]);
    }
    }
    return 0;
}