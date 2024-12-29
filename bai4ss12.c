#include <stdio.h>
int compare(int arr[], int size, int max){
    max=0;
    for (int i=0;i<size;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[5]={3,5,2,4,6}, size=sizeof(arr)/sizeof(arr[0]), max;
    compare(arr,size,max);
    printf("Số lớn nhất trong mảng là: %d", compare(arr,size,max));
    return 0;
}