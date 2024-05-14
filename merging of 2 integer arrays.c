#include <stdio.h>
void printArr( int arr[] , int n );
void merge_arrays(int arr1[], int arr2[], int n , int m );

int main(){
    int n , m ;
    printf("enter size of array1 : ");
    scanf("%d", &n);
    int arr1[n];
    printf("enter values of array 1: ");
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
    merge_arrays(arr1 , arr2 , n , m );


    return 0 ;
}



void printArr( int arr[] , int n ){  // function to print array
    for (int i = 0 ; i < n ; i++){
        printf("%d ", arr[i]);
    }
}



void merge_arrays(int arr1[], int arr2[], int n , int m ){
    int mer_arr[n+m];
    for (int i = 0 ; i < n ;  i++ ){
            mer_arr[i] = arr1[i] ;
    }
    for (int i = n , j = 0 ; i < n+m , j < m ; i++ , j++ ){
            mer_arr[i] = arr2[j] ;
    }

    printArr(mer_arr , n+m );  // calling other funtion in defination
}
