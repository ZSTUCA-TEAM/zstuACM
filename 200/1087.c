#include <stdio.h>
int main()
{
    int i,j,n;
    while (scanf("%d",&n)!=EOF){
        //行控制 
        for(i=1;i<=2*n-1;i++){
        //正三角形输出 
            if(i<=n){
                for(j=1;j<=n-i;j++){
                    printf(" ");
                }
                for(j=1;j<=2*i-1;j++){   
                    if(j<=i) 
                    	printf("%d",j);     
                    else
                    	printf("%d",2*i-j);                 
                }
            } else {//倒三角形输出 
        		for(j=1;j<=i-n;j++){
                    printf(" ");            
                }
                for(j=1;j<=4*n-2*i-1;j++){
                    if(j<2*n-i) 
                        printf("%d",j);     
                    else
                        printf("%d",4*n-2*i-j);   
                }   
            }
         printf("\n");   
    	} 
    }
    return 0;
}
 
