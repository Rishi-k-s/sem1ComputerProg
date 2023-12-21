#include <stdio.h>
#include <string.h>



int main(){


    char str1[50],str2[50];
    int i=0,j=0;
    char result[256];

    scanf("%s",&str1);
    scanf("%s",&str2);

    while(str1[i] != '\0'){
        result[j] = str1[i];
        i++;
        j++;
    }
    i=0;
    while(str2[i] != '\0'){
        result[j] = str2[i];
        i++;
        j++;
    }
    printf("%s",result);
    
    return 0;

}
