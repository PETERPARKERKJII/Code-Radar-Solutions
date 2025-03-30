#include<stdio.h>
#include<math.h>
int isprimenumber(int n){
    if(n<2)return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int main(){
    int n;
    printf("enter number: ")l
    scanf("%d", &n);
    if (isprimenumber(n)){
        printf("%d is a prime number.\n",n);
    }else{
        printf("%d is not a prime number.\n",n);
    }
    return 0;
}