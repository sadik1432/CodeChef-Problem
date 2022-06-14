// Problem link: https://www.codechef.com/submit-v2/MINFLIPS

#include<stdio.h>
#include<math.h>
int main ()
{
    int t;
    scanf("%d", &t);
    while (t--){
        int n,sum = 0; 
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i <n; i++){
            scanf("%d", &arr[i]);
        }
        if(n%2==1){ //check if the array size is odd or even if odd it cannot be made equal to zero
            printf("-1\n");
        }
        else{
            for(int i = 0; i <n; i++){
                sum += arr[i];
            }
            if(sum==0){
                printf("0\n");
            }
            else{
                int val=abs(sum/2);
                printf("%d\n",val);
            }
        }

    }
    return 0;
}