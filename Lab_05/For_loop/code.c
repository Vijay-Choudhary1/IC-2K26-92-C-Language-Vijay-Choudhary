#include<stdio.h>
int main () {
    int n , Sum  = 0 ;
    printf("Enter a positive integer: ");
    scanf("%d", &n ) ; 
    for (int i = 1 ; i<=n ; i++){
        Sum = Sum + i ;
    }
    printf("Sum of first %d natural numbers is %d",n, Sum );
    return 0 ;
}
