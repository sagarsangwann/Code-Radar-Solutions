#include <stdio.h>

int main() {
    float radius, area;
    scanf("%.1f", &radius);
    area = 3.14 * radius * radius;
    printf("Area: %.2f", area);
    return 0;
}