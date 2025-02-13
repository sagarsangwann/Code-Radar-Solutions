#include<stdio.h>
int main(){
    int N;
    int sum=0;
    for(int i=0; i<=N; i++){
        sum += i;
        printf("%d", sum);
    }
}