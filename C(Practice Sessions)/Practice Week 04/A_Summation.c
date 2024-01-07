#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int ar[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&ar[i]);
    }
    long long int sum=0;
    for(int i=0;i<N;i++)
    {
        sum=sum+ar[i];
    }
    if(sum<0)
    {
        printf("%lld",sum*-1);
    }
    else
    {
        printf("%lld",sum);
    }
    return 0;
    
}