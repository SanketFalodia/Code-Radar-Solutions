// Your code here...
// Your code here...
#include <stdio.h>
int main(){
    int a;
    int pos=0;
    scanf("%d",&a);
    while((a & 1)==1){
        a=a>>1;
        pos++;
    }
    printf("%d",pos);
}