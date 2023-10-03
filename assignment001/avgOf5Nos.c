#include <stdio.h>
// code to find the sum and average of two numbers

int var1, var2, var3, var4, var5, sum;
float avg;

void main(){
    printf("Enter mark of 1st subject: ");
    scanf("%d",&var1);
    printf("Enter mark of 2st subject: ");
    scanf("%d",&var2);
    printf("Enter mark of 3st subject: ");
    scanf("%d",&var3);
    printf("Enter mark of 4st subject: ");
    scanf("%d",&var4);
    printf("Enter mark of 5st subject: ");
    scanf("%d",&var5);
    sum = var1+var2+var3+var4+var5;
    avg = sum/5;
    printf("Sum is %d/500\n",sum);
    printf("Avg is %f/100\n",avg);

}