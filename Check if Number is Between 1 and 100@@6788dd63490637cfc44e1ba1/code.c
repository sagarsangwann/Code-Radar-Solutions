#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if (0<a>101){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
}