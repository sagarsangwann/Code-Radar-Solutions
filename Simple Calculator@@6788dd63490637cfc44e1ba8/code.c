#include<stdio.h>
int main(){
    int a, b, ch;
    scanf("%d %d %ch", &a, &b, &ch);
    if(ch == +){
        printf("%d", a+b);
    }
    else if(ch == -){
        printf("%d", a-b);
    }
    else if(ch == /){
        printf("%d", a/b);
    }
    else if(ch == *){
        printf("%d", a*b);
    }
    else{
        printf("Error");
    }    
    return 0;
}