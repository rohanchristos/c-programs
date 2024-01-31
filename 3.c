# include<stdio.h>
int main()
{
        int a,b,c,t,j,k;
        a=2434;
        b=a%10;
        c=a%100;

        t=a%1000;
        j=a-t;
        k=j/1000;
        printf("%d\n%d\n%d\n%d\n%d",a,b,c,t,k);
        return 0;


}