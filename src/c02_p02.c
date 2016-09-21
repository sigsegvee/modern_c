#include <math.h>
#include <stdio.h>

#define WIDTH   8
#define HEIGHT  6

// who needs more than 3 digits of pi?
int main(void)
{
    int r = 10;
    double v = 4.0f/3.0f*3.14*pow(r, 3);
    printf("%f\n", v);
}