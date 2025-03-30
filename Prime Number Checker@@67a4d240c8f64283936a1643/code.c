#include<stdio.h>
#include<math.h>
int isprimenumber(int n){
    if(n<2)return0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%2==0)return 0;
    }
    return 1;
}
int main(){
    int n;
    printf("enter number: ")
    scanf("%d",n);
    if isprimenumber(num){
        printf("%d is a prime number.\n",num);
    }else{
        printf("%d is not a prime number.\n",num);
    }
    return 0;
}