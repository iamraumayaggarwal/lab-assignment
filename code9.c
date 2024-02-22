#include <stdio.h>
#include <string.h>

int main() {
    int l;
    char str1[20],str2[20];
    printf("input string 1\n");
    fgets(str1,20,stdin);
    printf("input string 2\n");
    fgets(str2,20,stdin);
    printf("new string is\n");
    strcat(str1,str2);
    puts(str1);

    return 0;
}