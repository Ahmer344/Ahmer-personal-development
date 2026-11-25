// DAY 7    2D ARRAYS 

//INTIALIZING 2D ARRAY
/* #include<stdio.h>
int main(){
int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
printf("The elements of the 2D array are : \n");
for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
        printf("%d ", arr[i][j]);
    }
    printf("\n");
}
return 0;
}*/

//TAKE INPUT 2D ARRAY
/*#include<stdio.h>
int main(){
    int arr[2][3];
    printf("Enter the elements of the 2D array : \n");
    for(int i=0; i<2; i++){
        for(int i=0; i<3; i++){
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    printf("The elements of the 2D array are : \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
} */


// SUM OF 2D ARRAY 
/* #include<stdio.h>
int main(){
    int arr[2][3];
    int sum=0; 
    printf("Enter the elements of array : \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The elemnets of array are: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ", arr[i][j]);
            sum = sum + arr[i][j]; 
        }
        printf("\n");
    }
    printf("The sum of array is : %d", sum);
    return 0;
}  */

// SUM OF 2D ARRAY 
/*#include<stdio.h>
int main(){
    int A[2][3];
    int B[2][3];
    int C[2][3];
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("Enter the elements of A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("Enter the elements of B[%d][%d] : ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            C[i][j] = A[i][j] + B[i][j];
            printf("The elemnets of C array is : %d\n", C[i][j]);
        }
    }
    return 0;
}*/

//MULTIPLACATION OF 2D ARRAY
/* #include<stdio.h>
int main(){
    int A[2][3];
    int B[3][2];
    int C[2][2];
    printf("Enter elements of A array:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of B array:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &B[i][j]);
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            C[i][j] = 0;
            for(int k=0; k<3; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("The elements of C array are:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
} */

//TRANSPOSE OF A MATRIX
/*#include<stdio.h>
int main(){
    int A[2][3];
    int T[3][2];
    printf("Enter elements of A array:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &A[i][j]);
        }
    }
        for(int i=0; i<2; i++){
            for(int j=0; j<3; j++){
                T[j][i] = A[i][j];
            }
    }
    printf("The elements of the transposed matrix are:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }
    return 0;
} */

// SUM OF 2D MATRIX
 /* #include<stdio.h>
int main(){
    int a[3][3];
    int mainSum = 0;
    int secondarySum = 0;
    printf("Enter the elements of matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("The elements of matrix are:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i == j){
                mainSum += a[i][j];
            }
            if(i + j == 2){
                secondarySum += a[i][j];
            }
        }
    }
    printf("Main diagonal sum = %d\n", mainSum);
    printf("Secondary diagonal sum = %d\n", secondarySum);
    return 0;
} */

//2D ARRAY SYMMENTRIC
/* #include<stdio.h>
int main(){
    int a[3][3];
    int symmetric = 1;
    printf("Enter the elements of matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("The elements of matrix are:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(a[i][j] != a[j][i]){
                symmetric = 0;
            }
        }
    }
    if(symmetric == 1){
        printf("This is a symmetric matrix.\n");
    }
    else{
        printf("This is not a symmetric matrix.\n");
    }
    return 0;
} */

// 2D ARRAY UPPER TRIANGULAR 
/* #include<stdio.h>
int main(){
    int a[3][3];
    int upper = 1;
    printf("Enter the elements of matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("The elements of matrix are:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i>j && a[i][j]!=0){
                upper = 0;
            }

        }
    }
    if(upper=0){
        printf("Not Upper triangular matrix\n");
    } else{
        printf("Upeer triangular matrix\n");
    }
    return 0;
} */

//2D ARRAY IDENTITY MARTIX
/* #include<stdio.h>
int main(){
    int A[3][3];
    int identity = 1;
    printf("Enter elements of matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i == j && A[i][j] != 1){
                identity = 0;
            }
            if(i != j && A[i][j] != 0){
                identity = 0;
            }
        }
    }
    if(identity == 1){
        printf("Matrix is an identity matrix.");
    }
    else{
        printf("Matrix is not an identity matrix.");
    }
    return 0;
} */

// 2D ARRAY COLOUM AND ROW WISE ADDITION IN MATRIX
/* #include<stdio.h>
int main(){
     int a[3][3];
    printf("Enter the elements of matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("The elements of matrix are:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("---ROW SUM---\n");
    for(int i=0; i<3; i++){
        int sum =0;
        for(int j=0; j<3; j++){
            sum +=a[i][j];
        }
        printf("Row : %d sum : %d\n", i+1, sum);
    }
    printf("---COLOUM SUM---\n");
    for(int j=0; j<3; j++){
        int sum =0; 
        for(int i =0;i<3; i++){
            sum +=a[i][j];
        }
        printf("Coloum : %d sum : %d\n", j+1, sum);
    }
    return 0;
} */

// 2D ARRAY FIND SMALLEST AND LARGEST IN MATRIX
/* #include<stdio.h>
int main(){
    int a[3][3];
    int largest, smallest;
    int maxRow=0, maxColumn=0;
    int minRow=0, minColumn=0;
    printf("Enter the elements of matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("The elements of matrix are:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    largest = a[0][0];
    smallest = a[0][0];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(a[i][j] > largest){
                largest = a[i][j];
                maxRow = i;
                maxColumn = j;
            }
            if(a[i][j] < smallest){
                smallest = a[i][j];
                minRow = i;
                minColumn = j;
            }
        }
    }
    printf("Largest element = %d\n", largest);
    printf("Position = Row %d, Column %d\n",
           maxRow+1, maxColumn+1);
    printf("Smallest element = %d\n", smallest);
    printf("Position = Row %d, Column %d\n",
           minRow+1, minColumn+1);
    return 0;
} */

// 2D ARRAY SPIRAL MATRIX 
#include<stdio.h>
int main(){
    int a[3][4];
    int rows = 3;
    int cols = 4;
    printf("Enter the elements of matrix:\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;
    printf("Spiral order:\n");
    while(top <= bottom && left <= right){
        for(int j=left; j<=right; j++){
            printf("%d ", a[top][j]);
        }
        top++;
        for(int i=top; i<=bottom; i++){
            printf("%d ", a[i][right]);
        }
        right--;
        if(top <= bottom){
            for(int j=right; j>=left; j--){
                printf("%d ", a[bottom][j]);
            }
            bottom--;
        }
        if(left <= right){
            for(int i=bottom; i>=top; i--){
                printf("%d ", a[i][left]);
            }
            left++;
        }
    }
    return 0;
}
