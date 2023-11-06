#include <stdio.h>
int main(){
    int l,b,h,area1=0,area2=0;
    printf("enter length breadth and height:\n");
    scanf("%d%d%d",&l,&b,&h);
    area1=l*b;
    area2=b*h;
    printf("The area of the rectangle is: %d, The area of the triangle is: %d",area1,area2);
    return 0;
}