// Your code here...
#include <stdio.h>
int main(){
    int a,i;
    int count=0;
    scanf("%d",&a);
    int bits = sizeof(a)*8;
    for (int i = bits - 1; i >= 0; i--) {
        if ((num >> i) & 1)
            break;
        count++;
}
printf("%d",count);
}