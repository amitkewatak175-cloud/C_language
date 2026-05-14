#include <stdio.h>
int main()
{
    float cel, faren;
    printf("Enter the celcius to convert into farenheit.\n");
    scanf("%f", &cel);
    
    faren = (cel * 9/5) + 32;

    printf("%.2f Celcius = %.2f Farenheit.\n", cel, faren);

    return 0;
}