#include<stdio.h>
int main()
{
    int a = 23;
    int b=45;
    int *y=&b;
    int *x=&a;
    int **m=&y;
    int **g=&x;
    printf("%p\n",&a);
    printf("%p\n",x);
    printf("%p\n",&y);
    printf("%p\n",&b);
    printf("%p\n",&m);
    printf("%p\n",&g);



return 0;
}