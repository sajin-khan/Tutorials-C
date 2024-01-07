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
    int x;
    scanf("%d",&x);
    int ans=-1;
    for(int i=0;i<N;i++)
    {
        if(ar[i] == x)
        {
            ans=i;
            break;
        }
    }
    printf("%d",ans);
    return 0;
}