// program to find lasgest and smallest element of array
#include <stdio.h>

void maxmin(int[],int);
int main() {
    int i,lim,arr[20];
    printf("Input the limit of the array:");
    scanf("%d",&lim);
    printf("input array elements:");
    for(i=0;i<lim;i++) {
        scanf("%d",&arr[i]);
    }
    maxmin(arr,lim);

    return 0;
}

void maxmin(int arr[],int n) {
    int i,max=arr[0],min=arr[0];

    for(i=0;i<n;i++) {
        if(max<arr[i])
            max=arr[i];
        if(min>arr[i])
            min=arr[i];
    }
    printf("max=%d \n min=%d",max,min);
}