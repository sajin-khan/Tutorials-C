#include<stdio.h>
#include<string.h>
int main()
{
    char A[11];
    scanf("%s",&A);
    char B[11];
    scanf("%s",&B);
    int lenA=strlen(A);
    int lenB=strlen(B);
    printf("%d %d\n",lenA,lenB);
    printf("%s%s\n",A,B);
    int temp=A[0];
    A[0]=B[0];
    B[0]=temp;
    printf("%s %s",A,B);

    return 0;
}