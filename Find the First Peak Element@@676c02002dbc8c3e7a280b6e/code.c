#include <stdio.h>
int main(){
    int n;
    int i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
        printf("%d",arr[i]);
        break;
    }

    }
}