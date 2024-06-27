#include <stdio.h>
void main()
{   //input a number
    int i,n,fib=0,gap=1;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    //printing the fibonacci series using loop
    printf("The fibonacci series is: ");
    for (i=1;i<=n;i++){
        printf("%d ",fib);
        fib = fib + gap;
        gap = fib - gap;
    }
}
