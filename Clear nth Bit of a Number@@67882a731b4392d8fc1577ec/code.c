// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int res;
    res= a &~(1<<b);
    if (res==1){
        printf("Set");
        return 0;
    }
    printf("Not Set");
}