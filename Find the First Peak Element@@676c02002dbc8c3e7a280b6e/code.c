// Your code here...
#include <stdio.h>
int isPeak(int arr[],int x){
    for(int i=0;i<x;i++){
    if(i==0){
        if(arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            
        }
        else if (i==x){
            if(arr[i]>arr[i-1]){
                printf("%d",arr[i]);
            }
        }
        else
        for(int i=1;i<x-1;i++){
            if (arr[i]>arr[i-1] && arr[i>i+1]){
                printf("%d",arr[i]);
            }
        }
    }
    }

}
  

int main(){
    int n;
    scanf("%d",&n);
    int arr;
    for(int i=0;i<n;i++){
        scanf("%d",arr[n]);
    }
    isPeak(arr,n);
    return 0;
}