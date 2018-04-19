//謝謝 林力暐 提供

#include <stdio.h>
#include <stdlib.h>
#include <cmath> 
typedef long long int INT;

INT ans(INT c)  
{  
    INT total=1;  
    INT cnt=1;  
    INT b=c;  
    for(INT i=2;i*i<=c;)  
    {  
       if(b%i==0)  
       {  
          b/=i; 
          cnt++;
       }  
       else  
       {  
         total*=cnt;
         cnt=1;  
         i++;  
         if(i*i>b)break;  
       }     
    }  
    if(b>1)total*=2;  
    return total;  
}  

int main()
{
    int T;
 
	scanf("%d",&T);
 
	for(int i = 0; i < T; i++){
 
		INT a,b,X,Y;
 
		scanf("%lld%lld",&a,&b);
        printf("%lld\n",ans(a*b));    
 
	}
    
} 
