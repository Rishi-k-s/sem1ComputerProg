#include <stdio.h>
// code to swap two nos

int var1=0, var2=0;

void main(){
    printf("swapping two numbers\n");
    printf("Enter first number: ");
    scanf("%d",&var1);
    printf("Enter second number: ");
    scanf("%d",&var2);
    printf("befor swap %d and %d\n",var1,var2);
    var1 = var1+var2;
    var2 = var1-var2;
    var1 = var1-var2;
    printf("after swap %d and %d",var1,var2);

}