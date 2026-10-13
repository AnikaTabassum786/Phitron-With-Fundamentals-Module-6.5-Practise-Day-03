#include <stdio.h>

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    // printf("%d ", x);
    // printf("%d" , y);

    if(x%y==0 || y%x==0){
        printf("YES");
    }
    else{
        printf("NO");
    }



    return 0;
}