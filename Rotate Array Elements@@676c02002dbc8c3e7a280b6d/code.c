// Your code here...
#include <stdio.h>
void arrayr(int arr[],int start,int end);
int main(){
    int x;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    arrayr(arr,0,x-1);
    arrayr(arr,0,k-1);
    arrayr(arr,k,x-1);
    for(int i=0;i<x;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
void arrayr(int arr[],int start,int end){
for(int i=start,j=end;i<j;i++,j--){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}}