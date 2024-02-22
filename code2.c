// program to print sum of digits of each element of array

#include<stdio.h>
int sum(int);

int main() {
    int i,lim,sum1=0,ele,arr[20];
    printf("input the size of the array:");
    scanf("%d",&lim);
    printf("input array elements:");
    for(i=0;i<lim;i++)
            scanf("%d",&arr[i]);
       
    for(i=0;i<lim;i++) {
        sum1=sum(arr[i]);
        printf("%d",sum1);
    }

    return 0;
}

int sum(int ele) {
    int i,sum2=0;
    while(ele!=0) {
        int d=ele%10;
        sum2=sum2+d;
        ele=ele/10;
    }

    return sum2;
}
