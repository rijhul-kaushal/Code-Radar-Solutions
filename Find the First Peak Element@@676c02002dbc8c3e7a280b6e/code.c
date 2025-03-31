// Your code here...
#include <stdio.h>
int isPeak(int arr[],int x);
for(int i=0;i<x;i++){
    if(i==0){
        if(i>i+1){
            printf("%d",arr[i]);
            
        }
        else if (i==x){
            if(i>i-1){
                printf("%d",arr[i]);
            }
        }
        else
        for(int i=1;i<x-1;i++){
            if (i>i-1 && i>i+1){
                printf("%d",arr[i]);
            }
        }
    }
    }

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",arr[n]);
    }
    isPeak(arr,n);
    return 0;
}