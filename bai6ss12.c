#include <stdio.h>
int perfect(int n){
    int sum=0;
    for (int i=1;i<n;i++){
        if (n%i==0){
            sum+=i;
        }
    }
    if (sum==n){
        return 1;
    } else {
        return 0;
    }
}
int main(){
    int n;
    printf("Mời bạn nhập 1 số nguyên: ");
    scanf("%d", &n);
    if (perfect(n)==1){
        printf("%d là số hoàn hảo", n);
    } else {
        printf("%d không phải là số hoàn hảo", n);
    }
    return 0;
}