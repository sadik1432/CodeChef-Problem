// Problem link: https://www.codechef.com/submit-v2/PRIZEPOOL

#include <stdio.h>
#include <math.h>
int main()
{
    
    int t;
    scanf("%d", &t);
    while(t--){
        int x,y;
        scanf("%d %d", &x, &y);
        printf("%d\n",(x*10)+(y*90));
    }
    return 0;
}