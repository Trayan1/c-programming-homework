#include <stdio.h>
#include <stdlib.h>
int main(){
double number1,number2,number3,max;
printf("enter number 1:");
scanf("%lf",&number1);
printf("enter number 2:");
scanf("%lf",&number2);
printf("enter number 3:");
scanf("%lf",&number3);
if(number1<number2){
max=number2;}else{max=number1;}
if(max<number3){
max=number3;}
printf("%lf\n",max);
return 0;
}


