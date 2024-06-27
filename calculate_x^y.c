#include <stdio.h>
void main()
{   //input the base & power
    int i,x,y,result=1;
    printf("Enter the base(x): ");
    scanf("%d",&x);
    printf("Enter the power(y): ");
    scanf("%d",&y);
    //calculate x to the power y
    for (i=1;i<=y;i++){
        result *= x;
    }
    //printing the result
    printf("%d to the power %d is: %d",x,y,result);
}
