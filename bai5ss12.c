#include <stdio.h>
#include <math.h>
int ENum(int n){
    if (n<2){
        return 0;
    }
    for (int i=2;i<= sqrt(n);i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a,b;
    printf("Mời bạn nhập 1 số nguyên: ");
    scanf("%d", &a);
    if (ENum(a)==1){
        printf("%d là số nguyên tố", a);
    } else {
        printf("%d không phải là số nguyên tố", b);
    }
    printf("Mời bạn nhập 1 số nguyên: ");
    scanf("%d", &b);
    if (ENum(b)==1){
        printf("%d là số nguyên tố", b);
    } else {
        printf("%d không phải là số nguyên tố", b);
    }
    return 0;
}