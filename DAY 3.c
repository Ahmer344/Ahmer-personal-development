// // // // // // // // // // // AGE IF 
// // // // // // // // // // // #include<stdio.h>
// // // // // // // // // // // int main(){
// // // // // // // // // // //     int age;
// // // // // // // // // // //     printf("Enter your age\n");
// // // // // // // // // // //     scanf("%d", &age);
// // // // // // // // // // //     if(age>=18){
// // // // // // // // // // //         printf("U r adult\n");
// // // // // // // // // // //     }
// // // // // // // // // // //     else{
// // // // // // // // // // //         printf("U r Not\n");
// // // // // // // // // // //     }
// // // // // // // // // // //     return 0;
// // // // // // // // // // // }

// // // // // // // // // // // AGE IF ELSE IF
// // // // // // // // // // #include<stdio.h>
// // // // // // // // // // int main(){
// // // // // // // // // //     int age;
// // // // // // // // // //     printf("Enter your age\n");
// // // // // // // // // //     scanf("%d", &age);
// // // // // // // // // //     if(age>=18){
// // // // // // // // // //         printf("U r adult\n");
// // // // // // // // // //     }
// // // // // // // // // //     else if(age>=13 && age<18){
// // // // // // // // // //         printf("U r Teenager\n");
// // // // // // // // // //     }
// // // // // // // // // //     else{
// // // // // // // // // //         printf("U r Child\n");
// // // // // // // // // //     }
// // // // // // // // // //     return 0;
// // // // // // // // // // }

// // // // // // // // // // SWITCH CASE DAYS
// // // // // // // // // #include<stdio.h>
// // // // // // // // // int main(){
// // // // // // // // //     int day;
// // // // // // // // //     printf("Enter the day number (1-7):\n");
// // // // // // // // //     scanf("%d", &day);
// // // // // // // // //     switch(day){
// // // // // // // // //         case 1:
// // // // // // // // //             printf("Monday\n");
// // // // // // // // //             break;
// // // // // // // // //         case 2:
// // // // // // // // //             printf("Tuesday\n");
// // // // // // // // //             break;
// // // // // // // // //         case 3:
// // // // // // // // //             printf("Wednesday\n");
// // // // // // // // //             break;
// // // // // // // // //         case 4:
// // // // // // // // //             printf("Thursday\n");
// // // // // // // // //             break;
// // // // // // // // //         case 5:
// // // // // // // // //             printf("Friday\n");
// // // // // // // // //             break;
// // // // // // // // //         case 6:
// // // // // // // // //             printf("Saturday\n");
// // // // // // // // //             break;
// // // // // // // // //         case 7:
// // // // // // // // //             printf("Sunday\n");
// // // // // // // // //             break;
// // // // // // // // //         default:
// // // // // // // // //             printf("Invalid day number\n");
// // // // // // // // //     }
// // // // // // // // //     return 0;
// // // // // // // // // }

// // // // // // // // // NESTED IF ELSE
// // // // // // // // #include<stdio.h>
// // // // // // // // int main(){
// // // // // // // //     int age;
// // // // // // // //     printf("Enter your age\n");
// // // // // // // //     scanf("%d", &age);
// // // // // // // //     if(age>=18){
// // // // // // // //         printf("U r adult\n");
// // // // // // // //         if(age>=60){
// // // // // // // //             printf("U r Senior Citizen\n");
// // // // // // // //         }
// // // // // // // //     }
// // // // // // // //     else{
// // // // // // // //         printf("U r Not\n");
// // // // // // // //     }
// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // IF TEST 
// // // // // // // #include<stdio.h>
// // // // // // // int main(){
// // // // // // //     int marks;
// // // // // // //     printf("Enter your marks\n");
// // // // // // //     scanf("%d", &marks);
// // // // // // //     if(marks>30){
// // // // // // //         printf("U r Pass\n");
// // // // // // //     }
// // // // // // //     else{
// // // // // // //         printf("U r Fail\n");
// // // // // // //     }
// // // // // // //     return 0;
// // // // // // // }

// // // // // // // IF ELSE TEST
// // // // // // #include<stdio.h>   
// // // // // // int main(){
// // // // // //     int marks;
// // // // // //     printf("Enter your marks\n");
// // // // // //     scanf("%d", &marks);
// // // // // //     if(marks>30){
// // // // // //         printf("U r Pass\n");
// // // // // //         if(marks>90){
// // // // // //             printf("A*\n");
// // // // // //         }
// // // // // //             else if(marks>80){
// // // // // //                 printf("A\n");
// // // // // //             }
// // // // // //             else if(marks>70){
// // // // // //                 printf("B\n");
// // // // // //             }
// // // // // //             else if(marks>60){
// // // // // //                 printf("C\n");
// // // // // //             }
// // // // // //             else if(marks>50){
// // // // // //                 printf("D\n");
// // // // // //             }
// // // // // //         }
    
// // // // // //     else{
// // // // // //         printf("U r Fail\n");
// // // // // //     }
// // // // // //     return 0;
// // // // // // }
// // // // // #include<stdio.h>
// // // // // int main(){
// // // // //     int num;
// // // // //     printf("Enter a number\n");
// // // // //     scanf("%d", &num);
// // // // //     if(num>=1 && num<=9)
// // // // //         printf("%d", num);
// // // // //         if(num==1){
// // // // //             printf("one\n");
// // // // //         }else if(num==2){
// // // // //             printf("two\n");
// // // // //         }else if(num==3){
// // // // //             printf("three\n");
// // // // //         }else if(num==4){
// // // // //             printf("four\n");
// // // // //         }else if(num==5){
// // // // //             printf("five\n");
// // // // //         }else if(num==6){
// // // // //             printf("six\n");
// // // // //         }else if(num==7){
// // // // //             printf("seven\n");
// // // // //         }else if(num==8){
// // // // //             printf("eight\n");
// // // // //         }else if(num==9){
// // // // //             printf("nine\n");
// // // // //         }
// // // // //         else
// // // // //             printf("Greater than 9\n");
        
    
// // // // // return 0;
// // // // // }


// // // // //HACKER RANK PROBLEM SOLVING
// // // // switch(n)
// // // //     {
// // // //         case 1 : printf("one");
// // // //         break;
// // // //         case 2 : printf("two");
// // // //         break;
// // // //         case 3 : printf("three");
// // // //         break;
// // // //         case 4 : printf("four");
// // // //         break;
// // // //         case 5 : printf("five");
// // // //         break;
// // // //         case 6 : printf("six");
// // // //         break;
// // // //         case 7 : printf("seven");
// // // //         break;
// // // //         case 8 : printf("eight");
// // // //         break;
// // // //         case 9 : printf("nine");
// // // //         break;
// // // //         default : printf("Greater than 9");
// // // //     }

// // // //     return 0;
// // // // }        

// // // IPU prob 43
// //  #include<stdio.h>
// // int main()
// // {
// //     int n, count = 0;
// //     printf("Enter a number\n");
// //     scanf("%d", &n);
// //     if(n <= 1)
// //     {
// //         printf("Not Prime\n");
// //     }
// //     else
// //     {
// //         for(int i = 2; i < n; i++)
// //         {
// //             if(n % i == 0)
// //             {
// //                 count++;
// //                 break;
// //    }
// //         }
// //         if(count == 0)
// //         {
// //             printf("%d is prime\n", n);
// //         }
// //         else
// //         {
// //             printf("%d is not prime\n", n);
// //         }
// //     }
// //    return 0;   
// //     }

// // Final PF Prac
// // #include<stdio.h>
// // int main(){
// //      int marks;
// //      float percentage;
// //         printf("Enter your marks\n");   
// //         scanf("%d", &marks);
// //         percentage = (float)marks / 100 * 100;
// //         printf("Your percentage is: %.2f\n", percentage);
// //         if(marks>=1 && marks<=100 && percentage>=0 && percentage<=100){
// //             if(percentage>=75 && marks>=50){
// //                 printf("Eligible\n");
// //                 if(marks>=85){
// //                     printf("Distinction\n");
// //                 }
// //             }else if(percentage<75 && marks>=50){
// //                 printf("Attendence Short\n");
// //             }else if(marks>=50){
// //                 printf("Not Eligible\n");
// //             }else{
// //                 printf("Outside Valid range\n");
// //             }
// //         }
// //  return 0;
// // } 

// // LEAP YEAR PROB
// #include<stdio.h>
// int main(){
//     int year;
//     printf("Enter a year\n");
//     scanf("%d", &year);
//     if(year % 4==0 && year % 100 !=0 || year % 400==0){
//         printf("%d is a leap year\n", year);
//     }else{
//             printf("%d is not a leap year\n", year);
//         }
//         return 0;
//     }