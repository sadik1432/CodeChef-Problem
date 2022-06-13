// Problem link: https://www.codechef.com/submit-v2/MANIPULATE

#include<stdio.h>
int main ()
{
    int t;
    scanf("%d", &t);
    while (t--){
        int x,y;
        scanf("%d %d",&x,&y);
        if (x>=y){
            printf("YES\n");
        }
        
        else{
            printf("NO\n");
        }
    }
    return 0;
}