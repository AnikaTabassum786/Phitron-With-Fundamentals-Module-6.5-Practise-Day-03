#include <stdio.h>

int main()
{
    int x, y, z, result;
    scanf("%d %d %d %d", &x, &y,&z,&result);

    if(x+y*z == result){
        printf("YES");
    }
    else if(x+y-z == result){
       printf("YES");
    }
    else if(x-y+z == result){
       printf("YES");
    }
    else if(x*y+z == result){
       printf("YES");
    }
    else if(x-y*z == result){
       printf("YES");
    }
    else if(x*y-z == result){
       printf("YES");
    }
    else{
        printf("NO");
    }

    
    return 0;
}