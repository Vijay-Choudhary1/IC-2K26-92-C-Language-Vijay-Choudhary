#include <stdio.h>

int main() {
    int n, a = 0, b = 1, nextTerm;
    printf("Vijay Choudhary\n");
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    return 0;
}
