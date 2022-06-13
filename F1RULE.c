// Problem link: https://www.codechef.com/submit-v2/F1RULE



#include<stdio.h>
#include<math.h>
int main ()
{
    int t;
    scanf("%d", &t);
    while (t--){
        int x,y;
        scanf("%d %d",&x,&y);
        if (y<=(x*1.07)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
