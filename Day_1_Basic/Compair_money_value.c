#include <stdio.h>
int main()
{
    int a;
    float b;
    printf("Enter the rupee to know the value in dollars.\n");
    scanf("%d", &a);
    b= a*0.011;
    printf("The %d Rupee value in Dollars is %f.\n", a, b);

    return 0;
}