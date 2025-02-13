// Your code here..
// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int res;
    res=(a>>b) & 1;
    printf("%d",res)
}