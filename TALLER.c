
#include<stdio.h>
#include<math.h>
int main ()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int x,y;
        scanf("%d %d", &x, &y);
        if (x>y){
            printf("A\n");
        }else{
            printf("B\n");
        }
    }
}