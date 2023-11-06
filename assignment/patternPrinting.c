#include <stdio.h>

// QN 1
// void main(){

//     char charArr [10]= {"ABCDE"};
//     int i,j;

//     for (i=0;i<5;i++){
//         for (j=0;j<=i;j++){
//             printf("%c",charArr[j]);
//         }
//         printf("\n");
//     }

// }


//QN2
// void main(){

//     char charArr [10]= {"ABCDE"};
//     int i,j;

//     for (i=0;i<5;i++){
//         for (j=0;j<=i;j++){
//             printf("%c",charArr[i]);
//         }
//         printf("\n");
//     }

// }


//QN 3
// void main(){

//     char charArr [10]= {"ABCDE"};
//     int i,j;

//     for (i=0;i<5;i++){
//         for (j=0;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }

//     for (i=5;i>0;i--){
//             for (j=1;j<i;j++){
//                 printf("*");
//             }
//             printf("\n");
//         }

// }


//Q 4
// C program to print the full pyramid pattern of stars 
// #include <stdio.h> 
// int main() 
// { 
// 	int rows = 5; 
// 	for (int i = 0; i < 5; i++) {   

// 		for (int j = 0; j < 2 * (rows - i) - 1; j++) {  // 2()
// 			printf(" "); 
// 		} 

// 		for (int k = 0; k < 2 * i + 1; k++) { 
// 			printf("* "); 
// 		} 
// 		printf("\n"); 
// 	} 
// 	return 0; 
// }


//QN 6
// void main(){

//     int i,p;
//     int rows = 5;

//     for (i=5;i>=1;i--){
//         for (p=0;p<i;p++){
//             printf("%d",i);
//         }
//         printf("\n");
//     }

// }

//Q 7
// C program to print the pascal's triangle pattern 
#include <stdio.h> 

// int main(){ 
// 	int rows = 5; 

// 	for (int i = 1; i <= rows; i++) { 

// 		for (int j = 0; j < rows - i; j++) { 
// 			printf(" "); 
// 		} 

// 		int C = 1; // coefficient 

// 		for (int k = 1; k <= i; k++) { 
// 			printf("%d ", C); 
// 			C = C * (i - k) / k; 
// 		} 
// 		printf("\n"); 
// 	} 
// 	return 0; 
// }


#include <stdio.h>

int main() {
    int n = 4;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            printf("*   ");
        }

        printf("\n");
    }

    return 0;
}
