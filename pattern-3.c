// 5 4 3 2 1 
// 4 3 2 1 
// 3 2 1 
// 2 1 
// 1 


#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);

     for(int j=n+1; j>=0; j--){
        for(int i=j-1; i>0 ;i--){
           printf("%d ",i);
        }
        printf("\n");
     }
    return 0;
}