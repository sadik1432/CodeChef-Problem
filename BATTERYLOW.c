// Problem link: https://www.codechef.com/submit-v2/BATTERYLOW

#include<stdio.h>
int main ()
{
    int t;
    scanf("%d", &t);
    while (t--){
        int x;
        scanf("%d",&x);
        if (x<=15){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}