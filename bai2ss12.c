#include <stdio.h>
void arr(int a[], int size){
    for (int i=0; i<size;i++){
        printf("%d ", a[i]);
    }
     

}
int main(){
    int a[6]={2,5,4,6,7,8}, size=sizeof(a)/sizeof(a[0]);
    arr(a,size);
    return 0;


}