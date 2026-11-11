#include <stdio.h>

int main() {
    int i, j, n, count;
    printf("Vijay Choudhary");
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Prime numbers from 2 to %d are: \n", n);

    for (i = 2; i <= n; i++) {
        count = 0;

        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("%d ", i);
        }
    }

    return 0;
}
