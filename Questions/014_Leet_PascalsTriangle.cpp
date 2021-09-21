class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> pascal;
        for(int i=1; i<=numRows; i++){
            vector<int> row(i, 1);
            if(i >= 3){
				for(int j=1; j<i-1; j++) 
					row[j] = pascal[i-2][j-1] + pascal[i-2][j];
            }
            pascal.push_back(row);
        }
        return pascal;
    }
};