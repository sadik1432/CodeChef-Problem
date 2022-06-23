
#include <stdio.h>
#include <math.h>
int main()
{ 
    
    int t;
    scanf("%d", &t);
    while(t--){
        int x,y;
        scanf("%d %d", &x, &y);
        int a,b;
        scanf("%d %d", &a,&b);
        if (x<= a && y<= b)
        {
            printf("POSSIBLE\n");
        }
        else{
            printf("IMPOSSIBLE\n");
        }
    }
    return 0;
}