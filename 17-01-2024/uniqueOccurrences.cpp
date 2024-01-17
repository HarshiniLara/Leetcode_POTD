class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_set<int> temp;
        sort(arr.begin(), arr.end());
        int freq = 1;
        for(int i=1; i<arr.size(); i++) {
            if(arr[i]==arr[i-1]) freq++;
            else {
                if(temp.find(freq)!=temp.end()) return false;
                temp.insert(freq);
                freq = 1;
            }
        }
        if(temp.find(freq)!=temp.end()) return false;
        return true;
    }
};
