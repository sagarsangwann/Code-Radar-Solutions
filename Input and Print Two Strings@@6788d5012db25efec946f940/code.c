#include <stdio.h>


int main() {
    char str1 [20];
    char str2 [20];
    scanf("%s %s", &str1, &str2);
    printf("You entered: %s and ", str1);
    printf("%s", str2);
    return 0;
}