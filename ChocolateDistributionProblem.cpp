class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long ans=INT_MAX,diff,i;
    
    sort(a.begin(), a.end());
    
    for(i=0; i<= n-m;i++){
        diff=a[i+m-1]-a[i];
        ans=min(diff,ans);
    }
    
    return ans;
    }   
};
