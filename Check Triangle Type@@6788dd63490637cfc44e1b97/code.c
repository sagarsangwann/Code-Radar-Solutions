#include <stdio.h>


int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a=b=c){
        printf("Equilateral");
    }    
    else if((!(a=b)=c) || (!(a=c)=b) || (!(b=c)=a)){
        printf("Isoceles");
    }
    else{
        printf("Scalen");
    }
    return 0;
}