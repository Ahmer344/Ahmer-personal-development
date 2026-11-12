// // LOOP IN C LANGUAGE
// // print a number from 1 to 10
// #include<stdio.h>
// int main(){
//     for(int i=0; i<=10; i++){
//         printf("%d\n", i);
//     }
//     return 0;
// }

// WHILE LOOP print num to i enter by user 
// #include<stdio.h>
// int main(){
//     int n=0;
//     printf("Enter a number\n");
//     scanf("%d", &n);
//     int i=0;
//     while(i<=n){
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }

// // DO WHILE LOOP print num to i enter by user
// #include<stdio.h>
// int main(){
//     int n=0; 
//     printf("Enter a number\n");
//     scanf("%d", &n);
//     int i=0;
//     do{
//         printf("%d\n", i);
//         i++;
//     }while(i<=n);
//     return 0;   
// }

// FOR LOOP SUM OF N NUMBERS
/*#include<stdio.h>   
int main(){
    int n, sum =0;
    printf("Enter a number : \n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        sum = sum +i;
}
printf("Sum of first %d numbers is : %d\n", n, sum);
return 0;
}*/

// FOR LOOP TABLE OF N NUMBERS
/*#include<stdio.h>   
int main(){
    int n;
    printf("Enter a number : \n");
    scanf("%d", &n);
    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}*/

// BREAK STATEMENT OF ODD NUMBERS
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number : \n");
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         printf("%d\n", i);
//         if(i%2 !=0)
//             break;
//     }
//     return 0;
// }

// CS 1002 FINAL EXAM
/*#include<stdio.h>   
int main(){
    int n, sum=0,count=0;
    printf("Enter the number : \n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        printf("%d\n", i);
        if(i%2==0){
            sum = sum + i;
        }
        if(i%2!=0){
            count++;
        }
    }
    printf("Sum of even numbers: %d\n", sum);
    printf("Count of odd numbers: %d\n", count);
    return 0;
}*/

// PROBLEM OF THE DAY 
/*#include<stdio.h>
int main(){
    int n,num, pos=0, neg=0, zero=0; 
    printf("Enter how many time u need to enter the number : \n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        printf("Enter the number : \n");
        scanf("%d", &num);
        if(num>0){
            pos++;
        }
        else if(num<0){
           neg++;
        }
        else{
          zero++;
        }
    }
    printf("Count of positive numbers: %d\n", pos);
    printf("Count of negative numbers: %d\n", neg);
    printf("Count of zeros: %d\n", zero);
    return 0;
}*/
