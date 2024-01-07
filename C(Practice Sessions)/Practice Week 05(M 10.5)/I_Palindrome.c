#include <stdio.h>
#include <string.h>

int main() 
{
    char S[1001];
    scanf("%s", S);

    int length = strlen(S);
    int isPalindrome = 1;  // Assume the string is a palindrome
    for (int i = 0; i < length / 2; i++) 
    {
        if (S[i] != S[length - i - 1]) {
            isPalindrome = 0;  // Not a palindrome
            break;
        }
    }
    if (isPalindrome) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }

    return 0;
}
