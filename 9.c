# include<stdio.h>
int main()
{
            int a,b,c,d;
            scanf("%i",&a);
            b=(a&0x800)>>11;
            c=(a&0x40)>>6;
            printf("%d\n%d\n",b,c);
            return 0;
}