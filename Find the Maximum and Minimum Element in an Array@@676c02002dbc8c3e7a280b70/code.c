#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(){
    int n;
    int ar[n];
    scanf("%d",&n);
    for(int i=0;i<0;i++){
        scanf("%d",&ar[i]);
    }
    qsort(ar, n, sizeof(int), compare);
    printf("%d %d",ar[0],ar[n-1]);
}