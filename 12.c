#include<stdio.h>
int main(){
    char a;
    printf("Enter a charater:");
    scanf("%c", &a);
    if (a>=65&& a<=122)
{
printf("alphabet");
if (a=='a'||a=='e'||a=='i'||a=='o'||5=='u'){
    printf("Vowels");
}
else{
    printf("consonent");
}
}
else {
    printf("Special character");
}
return 0;
}
