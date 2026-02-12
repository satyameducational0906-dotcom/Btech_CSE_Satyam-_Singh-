#include<stdio.h>
// find reminder when a>b ,a/b
int main(){
int a,b;
printf("enter divided");
scanf("%d", &a);
printf(" enter divisor");
scanf("%d", &b);
int q = a/b;
int r = a-b*q; 
printf("remainder : %d",r);

    return 0;
} 