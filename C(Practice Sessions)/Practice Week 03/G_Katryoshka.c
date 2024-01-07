#include<stdio.h>
int main()
{
    long long int n,m,k, ans=0;
    scanf("%lld %lld %lld",&n,&m,&k);
    long long int min;
    if(n<=m && n<=k)
    {
        min=n;
    }
    else if (m<=n && m<=k)
    {
        min=m;
    }
    else
    {
        min=k;
    }
    ans+= min;
    n-=min;
    m-=min;
    k-=min;

    //n=8/2=4  k=3
    n=n/2;
    if(n<k)
    {
        ans+=n;
    }
    else
    {
        ans+=k;
    }
    printf("%lld\n",ans);

    
    return 0;
}