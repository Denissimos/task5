
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, D, x1, x2;
    printf("Input a, b, c\n");
    scanf("%f %f %f", &a, &b, &c);
    D = (b * b) - (4 * a * c);
    D = sqrt(D);
    if (D >= 0)
    D = sqrt(D);
    else {
    printf("The discriminant is 0, no roots\n");
    return 0;
    }
    x1 = (-b - D)/2 * a;
    x2 = (-b + D)/2 * a;
    printf("The roots of equation are %.2f %.2f \n, x1 x2");

return 0;
}