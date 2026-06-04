#include <stdio.h>
int main()
{
    int a;
    printf("Enter the age.\n");
    scanf("%d", &a);
    printf("0 for Invalid and 1 for Valid age.\n");
    printf("%d\n", a>18&&a<60);

    return 0;
}