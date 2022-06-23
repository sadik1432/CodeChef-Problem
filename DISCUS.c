
#include <stdio.h>
#include <math.h>
int main()
{ 
    int t;
    scanf("%d", &t);
    while(t--){
        // int x,y,z;
        // scanf("%d %d %d",&x,&y,&z);
        int arr[3];
        for(int i = 0; i < 3; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i = 0; i < 3; i++)
        {
            if(arr[0]<arr[i]){
                arr[0] = arr[i];
            }
        }
        printf("%d\n",arr[0]);
    }
    
    return 0;
}