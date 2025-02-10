#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    int avg;
    scanf("%d %d %d",&a,&b,&c);
    avg=a+b+c;
    printf("Average: ",avg);

}