#include <stdio.h>
void main()
{   //input a number
    int i,n,fact=1;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    //calculate the factorial
    for (i=1;i<=n;i++){
        fact *= i;
    }
    //printing the factorial
    printf("The factorial of %d is: %d",n,fact);
}
