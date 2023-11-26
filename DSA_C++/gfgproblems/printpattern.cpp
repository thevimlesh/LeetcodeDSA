public:
    void seqsum(vector<int>&ans,int N,int x){
        if(N<=0 || N>x){
            ans.push_back(N);
            return;
        }
        ans.push_back(N);
        seqsum(ans,N-5,x);
        if(N<=x){
            ans.push_back(N);
        }
    }
    vector<int> pattern(int N){
        // code here
        vector<int>ans;
        seqsum(ans,N,N);
        return ans;
    }
};