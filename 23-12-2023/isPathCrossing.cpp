struct PairHash {
    template <typename T1, typename T2>
    std::size_t operator () (const std::pair<T1, T2>& p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);

        return h1 ^ h2;
    }
};
class Solution {
public:
    bool isPathCrossing(string path) {
       unordered_set<pair<int, int>, PairHash> temp;
       pair<int, int> init = {0, 0};
       temp.insert(init);
       for(char c:path) {
           pair<int, int> p;
           if(c=='N') {
               p.first = init.first;
               p.second = init.second+1;
           }
           else if(c=='E') {
               p.first = init.first+1;
               p.second = init.second;
           }
           else if(c=='S') {
               p.first = init.first;
               p.second = init.second-1;
           }
           else {
               p.first = init.first-1;
               p.second = init.second;
           }
           if(temp.find(p)!=temp.end())
           return true;
           temp.insert(p);
           init = p;
       }
       return false;
    }
};
