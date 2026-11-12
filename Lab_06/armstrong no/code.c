#include <stdio.h>
int main()
{
    int n, p, rem, sum = 0;
    printf(" vijay choudhary\n");
    printf(" Enter a number\n");
    scanf("%d", &n);
    p = n;
    while (p > 0)
    {
        rem = p % 10;
        sum = sum + rem * rem * rem;
        p = p / 10;
    }
    if (sum == n) {
        printf("Armstrong Number");
    }
    else {
        printf("Not an Armstrong Number");
    }
    return 0;
}
