//calender for one year
# include <stdio.h>
int main()
{
            int i,n,k,v,c,down,m;
            scanf("%dfirstday",&n);
            i=1;
            m=1;
            down=0;
            while(m<=12)
            {
                printf("\nsun\tmon\ttue\twed\tthurs\tfri\tsat\n");
                   
                   while(i<=n-1)
                   {  
                        printf("\t");
                        i++;
                        down++;
                   }     
                 i=1;
                 while(i<=31)
                {
                    down++;
                    printf("%d\t",i);
                      if(down==7)
                    {
                        printf("\n");
                        down=0;
                    }
                    i++;
                }
                 m++; 
                  
            }
                
                   
                  
                  
                  




                
            


























    return 0;
}