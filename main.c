#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,f;
    printf("enter temperature in celsius:\n");
    scanf("%f", &c);
    f= (c*9/5)+32;
    printf("temperature in farenheit: -\t%.2f", f);
    return 0;
}
