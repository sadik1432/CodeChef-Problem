// Problem link: https://www.codechef.com/submit-v2/CABS
#include<stdio.h>
int main ()
{
    int t;
    scanf("%d", &t);
    while (t--){
        int x,y;
        scanf("%d %d",&x,&y);
        if (x==y){
            printf("ANY\n");
        }
        else if (x<y){
            printf("FIRST\n");
        }
        else{
            printf("SECOND\n");
        }
    }
    return 0;
}