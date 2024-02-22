// program to print reverse of each element in an array

#include <stdio.h>
int palin(int);

int main() {
    int i,lim,result=0,ele;
    int arr[20];
    printf("input the size of the array:");
    scanf("%d",&lim);
    printf("input array elements:");
    for(i=0;i<lim;i++){
        scanf("%d",&arr[i]);
    }
       
    for(i=0;i<lim;i++){
        result=palin(arr[i]);
        printf("%d",result);
    }

    return 0;
}

int palin(int ele){
    int res=0;
    while(ele!=0){
        int d=ele%10;
        res=res*10+d;
        ele=ele/10;
    }

    return res;
}
