#include<stdio.h>
int main(){
    int s;
    printf("Enter a character:");
    scanf("%d", &s);
    if (s>=48&&s<=57)
    {
        printf("digit");
    }
    else {
        printf("not a digit ");
    }
    return 0;
    }
