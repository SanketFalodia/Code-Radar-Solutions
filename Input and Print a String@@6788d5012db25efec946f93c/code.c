#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100];
    scanf("%s",str);
    printf("You entered: %s!/n",str);
    return 0;
}