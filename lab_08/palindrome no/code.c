#include <stdio.h>
int main()
{
    int n, t, r = 0, rem;
    printf("vijay choudhary\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;
    while(n > 0)
    {
        rem = n % 10;
        r = r * 10 + rem;
        n = n / 10;
    }
    if(t == r)
        printf("It is Palindrome Number");
    else
        printf("It is not Palindrome Number");
    return 0;
}
