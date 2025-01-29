#include <stdio.h>


int main() {
    char str1[20];
    int a; 
    char str2[20];
    scanf("%s %d", &str1, &a);
    scanf("%s", &str2);
    printf("Name: %s\n", str1);
    printf("Age: %d\n", a);
    printf("Hobby: %s", str2);
    return 0;
}