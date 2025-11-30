#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    while(b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    printf("GCD: %d\n", a);
    return 0;

}
