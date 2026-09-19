#include<stdio.h>
int main(){
    float pi=3.141;
    printf("Enter radius:");
    int r=0;
    scanf("%d",&r);
    float circum=2*pi*r;
    
    printf("%f",circum);
    return 0;

}