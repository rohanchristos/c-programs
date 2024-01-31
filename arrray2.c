#include<stdio.h>
int main()
{   int i,m,n,j,k;
    int a[10];

    for(i=0;i<=9;i++)
    { if(i%2==0)
       {
        a[i]=i;
       }
       else
       {
         a[i]=i+1000000;
         a[i]=a[i]-1098576;

       }
       printf("%d\n",a[i]);

    }

return 0;

}

