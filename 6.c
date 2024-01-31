# include<stdio.h>
int main()
{
        int a,b,c,d,f;
        printf("enter first intg");
        scanf("%d",&a);
        printf("enter second num");
        scanf("%d",&b);
        printf("enter third intg");
        scanf("%d",&c);
        d=(a>b)?((a>c)?c:a):((b>c)?c:b);
        printf("the number is=");
        printf("%d",d);

// second minimum function question no 8




        return 0;
}