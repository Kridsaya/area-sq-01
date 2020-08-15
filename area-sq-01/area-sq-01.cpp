#include <stdio.h>
int main()
{
    float Width;
    float Long;

    printf("Long : ");
    scanf("%f", &Long);

    printf("\n Width : ");
    scanf("%f", &Width);

    printf("Area of a Rectangle is %.2f \n\n", Width * Long);

    return 0;
}