#include<stdio.h>
int main(){
    int a,rev=1,c=0,r,res;
    scanf("%d",&a);
while(a!=0){
    r=a%10;
    rev=rev*r;
    a=a/10;
    c=c+r;
}
    res=rev-c;
    printf("%d",res);
}