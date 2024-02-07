
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        multimap<int,char> p;
        string res="";

        for(char c : s)
        freq[c]++;

        for(auto c:freq)
        p.insert({c.second, c.first});

        for(auto it = p.rbegin(); it!=p.rend(); ++it)
        res+=string(it->first, it->second);
        return res;
    }
};

