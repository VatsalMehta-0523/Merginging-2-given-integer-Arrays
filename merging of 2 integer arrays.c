#include <stdio.h>
void printArr( int arr[] , int n );                                   // function declaration.
void merge_arrays(int arr1[], int arr2[], int n , int m );             

int main(){
    int n , m ;                                                       // n & m is sizes of array1 & array2 respectively
    printf("enter size of array1 : ");
    scanf("%d", &n);
    int arr1[n];
    printf("enter values of array 1: ");                              // run time array initialising...
    for (int i = 0 ; i < n ; i++ ){
        scanf("%d", &arr1[i]);
    }
    printf("enter size of array2 : ");
    scanf("%d", &m);
    int arr2[m];
    printf("enter values of array2 : ");
    for (int i = 0 ; i < m ; i++ ){
        scanf("%d", &arr2[i]);
    }

    printf("merged array is : ");
    merge_arrays(arr1 , arr2 , n , m );                            // function revoke / function call


    return 0 ;
}



void printArr( int arr[] , int n ){                                 // function to print array
    for (int i = 0 ; i < n ; i++){
        printf("%d ", arr[i]);
    }
}



void merge_arrays(int arr1[], int arr2[], int n , int m ){             // function defination
    int mer_arr[n+m];                                                 
    for (int i = 0 ; i < n ;  i++ ){                                   // here elements from array1 is inserted from 0th index to (n-1)th index
            mer_arr[i] = arr1[i] ;
    }
    for (int i = n , j = 0 ; i < n+m , j < m ; i++ , j++ ){            
            mer_arr[i] = arr2[j] ;                                     // here elements from array2 is inserted from nth index to (m-1)th  
    }

    printArr(mer_arr , n+m );                                           // calling other funtion in defination
}
