#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int num,evenSum=0,oddSum=0;
    for(int i=0;i<N;i++)
    {
        scanf("%d",&num);
        if(num%2==0)
    {
        evenSum +=num;
    }
    else
    {
        oddSum +=num;
    }
    }
    printf("%d %d",evenSum,oddSum);
    return 0;
}