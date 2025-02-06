#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b=0;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    printf("%d\n",sum);
}