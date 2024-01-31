# include<stdio.h>
int main()
{
        int a,b,c,d,f,k,l,m,t,u,o,p,s,h;
        printf("enter first intg ");
        scanf("%d",&a);
        printf("enter second num ");
        scanf("%d",&b);
        printf("enter third intg ");
        scanf("%d",&c);
        printf("fourth ");
        scanf("%d",&m);
        printf("fifth ");
        scanf("%d",&f);
        printf("sixth ");
        scanf("%d",&h);
        printf("seventh ");
        scanf("%d",&k);
        printf("8th no: ");
        scanf("%d",&l);
        //now the logic will be applied question no 9
        d=(a<b)?((a<c)?a:c):((b<c)?b:c);
        t=(d<m)?((d<f)?d:f):((m<f)?m:f);
        u=(t<h)?((t<k)?t:k):((h<k)?h:k);
        o=(u<l)?u:l;
        p=(d<t)?((d<u)?d:u):((t<u)?t:u);
        s=(p<o)?p:o;
        printf("the number is=");
        printf("%d",s);






        return 0;
}