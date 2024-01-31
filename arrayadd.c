#include<stdio.h>
int main()
{  int i,j,k,l;
   int a[2][3];
   int b[2][3];
   int c[2][3];
   for(i=0 ;i<2 ;i++ )
   { for(j=0  ;j<3  ;j++ )
     {  scanf("%d",&a[i][j]);
     }
   }  
 for(i=0 ;i<2 ;i++ )
   { for(j=0  ;j<3  ;j++ )
       {scanf("%d",&b[i][j]);

       }    
   }  
       
       
       
       for(i=0 ;i<2 ;i++ )
   { for(j=0  ;j<3  ;j++ )
       {c[i][j]=a[i][j]+b[i][j];
       }
   }    
        for(i=0 ;i<2 ;i++ )
   { for(j=0  ;j<3  ;j++ )
       {printf("%d",c[i][j]);
       }
     }
    



 

return 0;

}