#include <stdio.h>
int sum(int a, int b){
    int tong = a+b;
    return tong;
}
    
int main(){
    int a, b;
    printf("Mời nhập 2 số bất kỳ: ");
    scanf("%d %d", &a, &b);
    printf("Tổng của 2 số là: %d", sum(a,b));
    return 0;

}