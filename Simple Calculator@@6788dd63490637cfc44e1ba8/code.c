#include<stdio.h>
int main(){
    scanf("%d %d %*c%c", &a, &b, &ch);
    if(ch == '+'){
        printf("%d", a+b);
    }
    else if(ch == '-'){
        printf("%d", a-b);
    }
    else if(ch == '/'){
        printf("%d", a/b);
    }
    else if(ch == '*'){
        printf("%d", a*b);
    }
    else if (ch == '/' && b == 0){
    printf("Error");
    }
    else{
        printf("Error");
    }    
    return 0;
}