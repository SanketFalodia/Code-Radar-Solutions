// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    int res;
    res=a & 1;
    if (res==1){
        printf("Set");
        return 0;
    }
    printf("Not Set");
}