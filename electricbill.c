#include<stdio.h>
void main(){
    int unit;
    float rate=4.50, billAmount;
    printf("Enter the unit comsumed : ");
    scanf("%d",&unit);
    billAmount=unit*rate;
    printf("Your electricity bill amount : %.2f",billAmount);

}