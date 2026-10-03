#include<stdio.h>
int main() {
  int a = 26 , b = 19 ;
    int c ;
    printf("Value of a is %d and value of b is %d\n", a , b);
    c = a ;
    a = b ;
    b = c ;
    printf("After swapping value of a is %d and value of b is %d\n", a , b);
    return 0 ;
}
