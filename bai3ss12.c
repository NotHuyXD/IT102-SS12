#include <stdio.h>
int calc(int n, int result){
    for (int i=n;i>0;i--){
        result*=i;

    }
    return result;
}
int main(){
    int n;
    int result=1;
    printf("Mời bạn nhập 1 số nguyên: ");
    scanf("%d", &n);
    printf("Giai thừa của %d là: %d", n, calc(n,result));
    return 0;
}