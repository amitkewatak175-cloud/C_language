#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of A and B.\n");
    scanf("%d\n%d", &a, &b);
    printf("Addition = %d\n", a+b);
    printf("Substraction = %d\n", a-b);
    printf("Multiplication = %d\n", a*b);
    printf("Division = %d\n", a/b);
    printf("Modulus = %d\n", a%b);

    return 0;
}