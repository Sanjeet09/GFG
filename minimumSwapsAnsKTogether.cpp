// https://www.geeksforgeeks.org/minimum-swaps-required-bring-elements-less-equal-k-together/
#include <bits/stdc++.h>
using namespace std;

int minSwap(int arr[], int n, int k) {
        
        int ans=INT_MAX,i,j,count,window=0;
        
        for(i=0; i<n; i++){
            if(arr[i]<=k)
                window++;
        }
        
        if(window==0)
            return 0;
            
        if(k==1)
            return 1;
            
        cout<<"window="<<window<<endl;
        for(i=0; i<=n+1-window; i++)
        {
            count=0;
            for(j=i; j<=i+window-1; j++)
            {
                if(arr[j]>k)
                    count++;
            }
            ans=min(ans,count);
        }
        
        return ans;
}

int main() {

	int t,n,k;
	
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        cout << minSwap(arr, n, k) << "\n";
        
	return 0;
}
  