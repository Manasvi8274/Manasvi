#include<stdio.h>
int main(){
    int k,l,m,n,d;
    scanf("%d",&k);
    scanf("%d",&l);
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&d);
    int sum=0;
    for(int i=1;i<=d;i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)    sum++;
    }
    printf("%d",sum);
}