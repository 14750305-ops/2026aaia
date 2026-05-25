///week14-4a.cpp

#include <stdio.h>
int main(){
    printf("請輸入2個整數(ex. 57 76):");
    int a,b;
    scanf("%d%d", &a,&b);
    int ans =1;
    for (int k=1;k<=a; k++){
        if(a%k==0 &&b%k==0) ans=k;
    }
    printf("最大公因數是:",ans);
    printf("%d/%d約分變成%d/%d\n",a,b,a/ans,b/ans);
}
