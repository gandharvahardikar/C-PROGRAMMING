// Swapping for numbers using Three Variables//
#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Enter value of A & B : \n");
    scanf("%d%d", &a,&b);
    printf("Before Swapping a = %d, b = %d", a,b);
    t=a;
    a=b;
    b=t;
    printf("After Swapping a = %d, b = %d", a,b);
    return 0;

}
