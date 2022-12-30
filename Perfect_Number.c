#include<stdio.h>
int main(){
    int n,i,j,r,c=0;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        r=n%i;
        if(r==0){
        c=c+i;
        }
    }
    if(c==n){
        printf("True");
    }
    else{
        printf("False");
    }
    
}