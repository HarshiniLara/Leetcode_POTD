class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size(), area = 0;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(matrix[i][j]==1 && i>0) 
                matrix[i][j]+=matrix[i-1][j];
            }
            vector<int> temp = matrix[i];
            sort(temp.begin(), temp.end(), greater());
            for(int j=0; j<temp.size(); j++)
            area = max(area, temp[j]*(j+1));
        }
        return area;
    }
};
