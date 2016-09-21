#include <math.h>
#include <stdio.h>

// who needs more than 3 digits of pi?
int main(void)
{
    int r;

    printf("enter the radius: ");
    scanf("%d", &r);
    double v = 4.0f/3.0f*3.14*pow(r, 3);
    printf("%f\n", v);
}