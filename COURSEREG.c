//Problem link: https://www.codechef.com/submit-v2/COURSEREG

#include<stdio.h>
int main ()
{
    int t;
    scanf("%d", &t);
    while (t--){
        int n,m,k;
        scanf("%d %d %d",&n,&m,&k);
        if (n<=(m-k)){
            printf("YES\n");
        }
        
        else{
            printf("NO\n");
        }
    }
    return 0;
}