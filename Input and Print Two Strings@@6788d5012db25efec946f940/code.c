#include <stdio.h>


int main() {
    char str1 [20];
    char str2 [20];
    scanf("%s %s", &str1, &str2);
    print("You entered: %s and ", str1);
    print("%s", str2);
    return 0;
}