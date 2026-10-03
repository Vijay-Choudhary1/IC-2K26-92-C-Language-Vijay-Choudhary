#include<stdio.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
int main ()  
 {

    int a ;
    printf("Vijay choudhary");
    printf("Enter the value of A : ", a) ;
    scanf("%d",&a );

    int b ;
    printf("Enter the value of B : ", b) ;
    scanf("%d",&b );
    int c ;
    printf("Enter the value of C : ", c) ;
    scanf("%d",&c );

    if(a>b && a>c ) { 
    printf("%d is the greatest ", a);
    }
    else if (b>a && b>c ) {
    printf("%d is the greatest ", b );
    }
    else {
    printf("%d is the greatest ", c );
    }
    return 0 ;
 }         
