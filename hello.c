#include<stdio.h>
int main()
{
    int x;
    float y;
    scanf("%d %f",&x,&y);
    if(x>y){
        printf("%.2f",y);
    }
    else if(x%5==0 && (x+0.5)<=y){
        printf("%.2f",(y-(0.50)-x));
    }
    else{
        printf("%.2f",y);
    }
    return 0;
}