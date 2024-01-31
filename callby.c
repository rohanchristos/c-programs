#include<stdio.h>
int mixavg(int,int,int,float*,int*);
int main()
{
    int a,b,c;
    float avg;
    int min;
    int max;
    int val;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    val=mixavg(a,b,c,&avg,&min);
    printf("%d\n%f\n%d\n",min,avg,val);    
}
// function defination
int mixavg(int p,int q,int g,float*r,int*u)
{
  int maximum;
  maximum=(p>q)?((p>g)?p:g):((q>g)?q:g);
  *u=(p<q)?((p<g)?p:g):((q<g)?q:g);
  *r=(p+q+g)/3.0;
  return maximum;


}







