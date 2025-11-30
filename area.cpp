#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length, breadth, area, perimeter;
    printf("length of the rectangle: ");
    scanf("%f", &length);
    printf("breadth of the rectangle:");
    scanf("%f", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("area of the plot is: %.2f\n", area);
    printf("perimeter of the plot: %.2f\n", perimeter);

    return 0;

}

