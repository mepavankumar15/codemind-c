#include<stdio.h>
int main(){
    int i,x,n,m,c=0,j,d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        c=(i*i)+c;
    }
    for(j=1;j<=n;j++){
        d=j+d;
    }
    m=d*d;
    x=m-c;
    printf("%d
",x);
        
}