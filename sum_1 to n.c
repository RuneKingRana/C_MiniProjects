#include <stdio.h>
void main()
{   //input a number
    int i,n,sum=0;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    //calculate the sum
    for (i=1;i<=n;i++){
        sum += i;
    }
    //printing the sum
    printf("The sum is: %d",sum);
}
