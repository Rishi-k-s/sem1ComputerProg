#include <stdio.h>

void main(){

    int elNum, getV, i,j, srchElem, temp;

    printf("Enter the total number of elements:");
    scanf("%d",&elNum);
    int mainArr[elNum];

    for (i=0;i<elNum;i++){
        scanf("%d",&getV);
        mainArr[i] = getV ;
    }

    for (i=0;i<elNum;i++){
        for (j=0;j<elNum-i-1;j++){
            // printf("Oii");
            if(mainArr[j] < mainArr[j+1]){
                temp = mainArr[j+1];
                mainArr[j+1] = mainArr[j];
                mainArr[j] = temp;
            }
        }
    }

    for (i=0;i<elNum;i++){
        printf("%d",mainArr[i]);
    }
}