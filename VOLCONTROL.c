// Problem link: https://www.codechef.com/submit-v2/VOLCONTROL

#include<stdio.h>
int main ()
{
    int t;
    scanf("%d", &t);
    while (t--){
        int x,y;
        scanf("%d %d",&x,&y);
        if (x<y){
            printf("%d\n",y-x);
        }
        
        else{
            printf("%d\n",x);
        }
    }
    return 0;
}