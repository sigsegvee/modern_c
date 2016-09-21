#include <stdio.h>

// etc.
int main(void)
{
    float amt;

    printf("enter the amount: ");
    scanf("%f", &amt);
    float total = amt*1.05; 
    printf("%.2f\n", total);
}