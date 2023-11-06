#include <stdio.h>

int main(){

    int totVal, getVal;
    scanf("%d",&totVal);

    switch (totVal)
    {
    case '+': 
        totVal+=getVal
        break;
        printf("Value: %d",totVal)
    case '-': 
        totVal-=getVal
        break;
    case '*': 
        totVal*=getVal
        break;
    case '/': 
        totVal/=getVal
        break;
    default:
        break;
    }
}