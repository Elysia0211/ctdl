//https://tuicocach.com/interchange-sort-thuat-toan-sap-xep-doi-cho-truc-tiep/
#include <stdio.h>
//Hàm đổi chỗ 2 số nguên a,b
void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
//Hàm sắp xếp Interchange Sort
void InterchangeSort(int a[], int n){   
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if(a[i] > a[j]) //Thực hiện đổi chỗ phần tử nhỏ hơn với phần tử thứ i.
                Swap(a[i], a[j]);
}
//hàm xuất mảng
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = {3,4,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    InterchangeSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
