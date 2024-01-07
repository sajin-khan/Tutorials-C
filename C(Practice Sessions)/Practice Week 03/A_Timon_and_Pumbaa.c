#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a-b>=0)
    {
        int ans=a-b;
        printf("%d\n",ans);
    }
    else
    {
        printf("%d\n",0);
    }
    return 0;
}