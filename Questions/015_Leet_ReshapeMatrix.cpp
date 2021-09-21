class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        int m=mat.size();
        int n=mat[0].size();
        
        if(m*n!=r*c)
            return mat;
        
        vector<vector<int>>v(r,vector<int>(c));
        
        int x=0,y=0;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(y==n){
                    x++;
                    y=0;
                }
                v[i][j]=mat[x][y++];
            }
        }
        
        return v;
    }
};