#include <stdio.h>
#include <math.h>

int main(void)
{
    float radius;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    float volume = 4.0f / 3.0f * M_PI * (radius * radius * radius);

    printf("Volume of sphere: %f\n", volume);

    return 0;
}