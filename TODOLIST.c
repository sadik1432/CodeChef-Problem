
#include <stdio.h>
#include <math.h>
int main()
{ 
    int t;
    scanf("%d", &t);
    while(t--){
    int n;
    scanf("%d", &n);
    int remove=0;
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        if(arr[i]>=1000)
        {
            remove+=1;
        }
    }
    printf("%d\n",remove);
    }
    
    return 0;
}