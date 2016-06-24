#include <stdio.h>
#include <math.h>
#include <D.h>

Roots Discriminant(float a, float b, float c)
{
    Roots answer;
    answer.D = (b * b) - (4 * a * c);
    if (answer.D >= 0){
	answer.x1 = (-b + sqrt(answer.D)) / (2 * a);
        answer.x2 = (-b - sqrt(answer.D)) / (2 * a);
    }
    return answer;
}
