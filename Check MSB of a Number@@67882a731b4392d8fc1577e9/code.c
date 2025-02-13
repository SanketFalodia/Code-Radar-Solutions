// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    int res;
    res=(a>>31) & 1;
    printf("%d\n",res);
}