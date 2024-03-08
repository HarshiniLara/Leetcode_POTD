class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i:nums) freq[i]++;
        int max_freq = 0, res = 0;
        for(auto it=freq.begin(); it!=freq.end(); ++it) 
            max_freq = max(max_freq, it->second); 
        
        for(auto it=freq.begin(); it!=freq.end(); ++it) {
            int cnt = it->second;
            if(cnt==max_freq) res+=cnt;
        }
        return res;
    }
};
