#include <stdio.h>
void update(int *,int *);     
int main()
{ 
    int a, b;
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d\n", a, b);

    
}
void update(int*r,int*k)
{
    int c;
    c=*r;
    *r=*r+*k;
    int val;
    int vam;
    val=(c>*k)?c:*k;
    vam=(c<*k)?c:*k;
    *k=val-vam;
}    
    
    