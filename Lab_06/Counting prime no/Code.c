#include <stdio.h>

int main()
{
    int n,i,num,flag, count = 0;
    printf("Vijay Choudhary\n");
    for(num = 2; num <= 100; num++) {
        flag = 0;

         for(i = 2; i * i <= num; i++) {
        
            if(num % i == 0) {
              flag = 1;
                break;
            }
        }

        if(flag == 0)
            count++;
    }

    printf("Total prime numbers = %d", count);
    return 0;
}
