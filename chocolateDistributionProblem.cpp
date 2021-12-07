// https://www.geeksforgeeks.org/chocolate-distribution-problem/
#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(), a.end());
    
    long long min=INT_MAX,diff,i,start,end;
    
    for(i=0; i< n-m+1 ; i++){
        diff = a[i+m-1]-a[i];
        if(diff<min)
            {
                min=diff;
                start=a[n-m+1+i];
                end=a[i];
            }
    }
    cout<<"start"<<start<<" ";
    cout<<"end="<<endl;
    return min;
}   

int main(){
	long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		
        for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		
		cout<<findMinDiff(a,n,m)<<endl;
	
	return 0;
}