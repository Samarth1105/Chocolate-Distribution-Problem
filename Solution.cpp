class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(),a.end());
        int minDiff = INT_MAX;
        
        for(int i=0;i+m-1<n;i++){
            int currDiff = a[i+m-1] - a[i];
            if(minDiff>currDiff){
                minDiff = currDiff;
            }
        }
        return minDiff;
    
    }   
};
