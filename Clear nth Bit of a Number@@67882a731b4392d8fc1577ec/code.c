// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int res;
    res= a &~(1<<b);
    print("%d",res);
}