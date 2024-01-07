#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s",s);
    int cnt[20]={0};
    for(int i=0;i<strlen(s);i++)
    {
        int val=s[i];
        cnt [val]++;
    }
    for(int i=0;i<strlen(s);i++)
    {
        int val=s[i];
        
        {
            printf("%d\n",cnt[val]);
        }
    }
    return 0;
}