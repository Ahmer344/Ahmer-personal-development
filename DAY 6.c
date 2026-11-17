// DAY 6 ARRAYS IN C 


// YT Video(APNA COLLEGE) 
// #include<stdio.h>
// int main(){
//     int marks[2];
//     printf("Enter the marks of math\n");
//     scanf("%d", &marks[0]);
//     printf("Enter the marks of physics\n");
//     scanf("%d", &marks[1]); 
//     printf("Enter the marks of chemistry\n");
//     scanf("%d", &marks[2]);
//     printf("The marks of math : %d  physics : %d  chemistry : %d\n", marks[0], marks[1], marks[2]);
//     return 0;
// }

// Practice question 1
//#include<stdio.h>
// int main(){
//     float price[3];
//     float total = 0;
//     printf("Enter the price of 1 items\n");
//     scanf("%f", &price[0]);
//     printf("Enter the price of 2 items\n");
//     scanf("%f", &price[1]);
//     printf("Enter the price of 3 items\n");
//     scanf("%f", &price[2]);
//     printf("The price of item 1 is : %.2f\n", price[0]+ (price[0]*0.18));
//     printf("The price of item 2 is : %.2f\n", price[1]+ (price[1]*0.18));
//     printf("The price of item 3 is : %.2f\n", price[2]+ (price[2]*0.18));
// return 0;
// }

// PRACTICE QUESTION 2
// #include<stdio.h>
// int main(){
//     int money[5];
//     for(int i=0; i<5; i++){
//         printf("Enter the money for the %d person\n", i+1);
//         scanf("%d", &money[i]);
//     }
//     for(int i=0; i<5; i++){
//         printf("The money of %d person is : %d\n", i+1, money[i]);
//     }
//     return 0;
// }

//LARGEST VALUE IN ARRAY 
// #include<stdio.h>
// int main(){
//     int arr[5];
//     int max = 0;
//     for(int i=0; i<5; i++){
//         printf("Enter the value of %d element\n", i+1);
//         scanf("%d", &arr[i]);
//     }
//     max= arr[0];
//     for(int i=0; i<5; i++){
//         if(arr[i]>max){
//             max= arr[i];
//         }
//     }
//     printf("The largest value in the array is : %d\n", max);
//     return 0;
// }

// HACKER RANK PROBLEM SOLVING
// #include <stdio.h>

// int main() {
//     int arr[4] = {0, 1, 2, 3};
//     int _arr[4];

//     for(int i = 0; i < 4; i++) {
//         _arr[i] = arr[3-i];
//     }

//     printf("Reversed array: ");

//     for(int i = 0; i < 4; i++) {
//         printf("%d ", _arr[i]);
//     }

//     return 0;
// }

// IPU TASK 
// #include <stdio.h>
// int main() {
//     int arr[5];
//     int high, count = 0, total = 0;
//     for(int i = 0; i < 5; i++) {
//         printf("Enter the sales of product %d: ", i + 1);
//         scanf("%d", &arr[i]);
//         printf("Sales of product %d: %d\n", i + 1, arr[i]);
//         total += arr[i];
//         if(arr[i] > 100) {
//             count++;
//         }
//     }
//     high = arr[0];
//     for(int i = 1; i < 5; i++) {
//         if(arr[i] > high) {
//             high = arr[i];
//         }
//     }
//     printf("\nTotal sales: %d\n", total);
//     printf("Highest sales: %d\n", high);
//     printf("Products with sales greater than 100: %d\n", count);
//     return 0;
// }

// 2nd largest in array find 
// #include <stdio.h>
// int main() {
//     int arr[5] = {10, 25, 8, 40, 30};
//     int largest = arr[0];
//     int second = 0;
//     int found = 0;
//     for(int i = 1; i < 5; i++) {
//         if(arr[i] > largest) {
//             second = largest;
//             largest = arr[i];
//             found = 1;
//         }
//         else if(arr[i] < largest && (found == 0 || arr[i] > second)) {
//             second = arr[i];
//             found = 1;
//         }
//     }
//     printf("Largest = %d\n", largest);
//     if(found) {
//         printf("Second largest = %d\n", second);
//     }
//     else {
//         printf("No second largest distinct number exists.\n");
//     }
//     return 0;
// 