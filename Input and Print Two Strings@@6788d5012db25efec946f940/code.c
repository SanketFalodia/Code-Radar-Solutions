#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str1[70],str2[50];
    scanf("%s %s",str1,str2);
    printf("You entered: %s, and %s/n",str1,str2);

}