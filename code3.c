// program to print sum of factors of each element of array

#include <stdio.h>
int sof(int);

int main() {
    int i,lim,arr[20],sum1=0;
    printf("Input the limit of the array:");
    scanf("%d",&lim);
    printf("input array elements:");
    for(i=0;i<lim;i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<lim;i++) {
        sum1=sof(arr[i]);
        printf("%d",sum1);
    }

    return 0;
}
int sof(int ele) {
    int i,sum2=0;
    for(i=1;i<=ele;i++){
        if(ele%i==0)
        sum2=sum2+i;
    }
    
    return sum2;
}
