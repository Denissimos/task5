
#include <stdio.h>
#include <math.h>
#include "D.h"
int main()
{
    float a, b, c;
    Roots result;
    printf("Input a, b, c\n");
    scanf("%f %f %f", &a, &b, &c);
    result = Discriminant(a, b, c);
    if (result.D >= 0){
	printf("The roots of equation are %.2f %.2f \n", result.x1 result.x2);
    }
    else
	printf("Discriminant is negative\n");
    return 0;
}