
#include <stdio.h>
#include <math.h>
int main()
{ 
    
    int arr[4];
    for(int i = 0; i < 4; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 3; i++){
        if(arr[i]==arr[3])
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    
    return 0;
}