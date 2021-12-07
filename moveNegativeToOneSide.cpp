// https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
#include<iostream>
using namespace std ;

void moveNegative(int arr[], int n){
    int i=0,j=n-1;

    while(i<=j){
        if(arr[i]<0)
            i++;
        
        if(arr[j]>0)
            j--;
        
        if(arr[i]>0 && arr[j]<0 && i<j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;    
        }
    }
}

int main(){

    int arr[]={-1,-3,3,-4,21,91};

    int n=sizeof(arr)/sizeof(arr[0]);

    moveNegative(arr,n);

    for(int x=0;x<n;x++ ){
        cout<<arr[x]<<" ";
    }

    return 0;
}