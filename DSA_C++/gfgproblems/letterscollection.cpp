class Solution{
public:
bool isValid(int i,int j,int n,int m){
        if(i<0 || j<0 || i>=n || j>=m)
            return(false);
        return(true);
    }
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        // code here
                // code here
    int dx1[]={-1,-1,-1,0,0,1,1,1};
    int dy1[]={-1,0,1,-1,1,-1,0,1};
    int dx2[]={-2,-2,-2,-2,-2,-1,0,1,2,2,2,2,2,1,0,-1};
    int dy2[]={-2,-1,0,1,2,2,2,2,2,1,0,-1,-2,-2,-2,-2};
        
        
        
        vector<int> ans;
        for(int c=0;c<q;c++){
            int sum=0;
            vector<int> cc(3,0);
            cc=queries[c];
            if(cc[0]==1){
                for(int i=0;i<8;i++){
                    int t1=cc[1]+dx1[i];    
                    int t2=cc[2]+dy1[i];
                    if(isValid(t1,t2,n,m))
                        sum+=mat[t1][t2];
                }
                
                
            }
            else{
                for(int i=0;i<16;i++){
                    int t1=cc[1]+dx2[i];    
                    int t2=cc[2]+dy2[i];
                    if(isValid(t1,t2,n,m))
                        sum+=mat[t1][t2];
                }
                
            }
            ans.push_back(sum);
        }
    return(ans);
    }
};