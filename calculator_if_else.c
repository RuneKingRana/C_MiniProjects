#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    int sum,abs,mul,div,rem;
    sum = a+b;
    abs = a-b;
    mul = a*b;
    div = a/b;
    rem = a%b;

    char c;
    printf("Enter operation:");
    scanf("%s",&c);

    if (c=='+')
        printf("The sum is : %d",sum);
    else if (c=='-')
        printf("The abstract is : %d",abs);
    else if (c=='*')
        printf("The multiple is : %d",mul);
    else if (c=='/')
        printf("The cousant is : %d",div);
    else if (c=='%')
        printf("The remainder is : %d",rem);
    else
        printf("Invalid Input!");
    return 0;
}
