// Problem link: https://www.codechef.com/submit-v2/INCRIQ

#include<stdio.h>
int main ()
{
    int t;
    scanf("%d", &t);
    while (t--){
        int x;
        scanf("%d",&x);
        if ((x+7)>170){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}