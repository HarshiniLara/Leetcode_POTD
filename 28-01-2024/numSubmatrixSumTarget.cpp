class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size(), cnt = 0;
        for(int i=0; i<m; i++) 
            for(int j=1; j<n; j++) 
                matrix[i][j]+=matrix[i][j-1];
        
        for(int colStart=0; colStart<n; colStart++) {
            for(int colEnd=colStart; colEnd<n; colEnd++) {
                int sum = 0;
                unordered_map<int, int> temp;
                temp[0] = 1;
                for(int row=0; row<m; row++) {
                    sum+=(matrix[row][colEnd]-(colStart ? matrix[row][colStart-1]:0));
                    int rem = sum-target;
                    cnt+=temp[rem];
                    temp[sum]++;
                }
            }
        }
        return cnt;
    }
};
