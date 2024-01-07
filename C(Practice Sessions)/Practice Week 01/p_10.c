#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk > 20000)
    {
        printf("Gucci Bag\n");
        printf("Gucci Belt\n");
    }
    else if(tk >= 10000)
    {
        printf("Gucci Bag");
    }
    else if(tk >= 5000)
    {
        printf("Levis Bag");
        
    }
    else
    {
        printf("Something from New Market");
    }
    return 0;


}