#include <stdio.h>


int main() {
    float a, b, d;
    float c; 
    scanf("%f %f %f", &a, &b, &d);
    c = (a+b+d)/3;
    printf("Average: %.2f", c);
    return 0;
}