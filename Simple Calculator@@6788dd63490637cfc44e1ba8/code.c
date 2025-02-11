#include<stdio.h>
int main(){
    int a, b, ch;
    int sum = a+b;
    int sub = a-b;
    int mul = a*b;
    int div = a/b;
    scanf("%d %d %c", &a, &b, &ch);
    if(ch == '+'){
        printf("%d", sum);
    }
    else if(ch == '-'){
        printf("%d", sub);
    }
    else if(ch == '/'){
        printf("%d", div);
    }
    else if(ch == '*'){
        printf("%d", mul);
    }
    else{
        printf("Error");
    }    
    return 0;
}