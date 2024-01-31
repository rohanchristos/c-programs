#include <stdio.h>

int* checker(int *,int);

int b[100];

int main()

{

 int i,j,k,l,h,count;

 int c[100];

 int *p=c;

 printf("number of digits in integer");

 scanf("%d",&j);

 for(i=0;i<j;i++)

  {

   scanf("%d",c+i);

  

  

  };

  

  int * f = checker(p,j);

  printf("succesful you can now print array b");

  for(h=0;1;h++)

  {

    printf("\n%d\n",b[h]);

    count=0;

    count=count++;

   if(count==(j+1)&&b[h]==0)

    {

      break;

    

    };

  

  };









}





int * checker(int *r,int k)

{ //int b[100];

  int m=*(r+0);

  int t=*(r+(k-1));

  for(int i=0;i<k;i++)

  {

   int *l=(r+i);

   int g= *(l+1) - *(l-1);

   int f= *(l+1) + *(l-1);

   int n= *(l+1) / *(l-1);

   int x= *(l+1) % *(l-1);

   int w= *(l+1) * *(l-1);

   if(*(l)==g||*(l)==f||*(l)==n||*(l)==x||*(l)==w)

   {

     printf("\n%d\n", *(l));

     b[i]=*(l);  

   };

   

   };

  

     

  

  return b;

  

  }

