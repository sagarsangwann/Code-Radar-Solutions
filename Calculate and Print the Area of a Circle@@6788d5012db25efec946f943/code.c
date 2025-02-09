#include <stdio.h>

int main() {
    float radius, pie, area;
    pie = 3.14;
    scanf("%.1f", &radius);
    area = pie * (radius * radius);
    printf("Area: %.2f", area);
    return 0;
}