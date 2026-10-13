// 5 
// 5 4 
// 5 4 3 
// 5 4 3 2 
// 5 4 3 2 1 

#include <stdio.h>

int main()
{

     for(int j=5; j>0; j--){
        for(int i=5; i>=j ;i--){
           printf("%d ",i);
        }
        printf("\n");
     }
    return 0;
}