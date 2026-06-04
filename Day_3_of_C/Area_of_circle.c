#include <stdio.h>
int main()
{
    int r;
    float a;
    printf("Enter the radius of circle.\n");
    scanf("%d", &r);
    a = 3.14 * r * r;
    printf("The area of circle of radius %d is %.2f\n", r, a);

    return 0;
}