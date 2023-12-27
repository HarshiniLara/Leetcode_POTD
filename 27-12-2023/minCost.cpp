class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int min_time = 0, n = colors.length(), i = 0;
        while(i<n-1) {
            int time = 0, j = i;
            while(j<n && colors[j]==colors[j+1]) {
                int a = neededTime[j], b = neededTime[j+1];
                if(a<=b)
                time+=a;
                else {
                    neededTime[j+1] = neededTime[j];
                    time+=b;
                }
                j++;
            }
            i = j+1;
            min_time+=time;
        }
        return min_time;
    }
};
