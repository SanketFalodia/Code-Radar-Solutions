#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    int c=0,a=0;
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++){
        if(ar[i]%2==0){
            c=c+1;
        }
        else{
            a=a+1;
        }
    }
    printf("%d  %d",c,a);


}