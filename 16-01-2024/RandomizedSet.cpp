class RandomizedSet {
private:
    vector<int> temp;
    unordered_map<int, int> m;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(m.find(val)==m.end()) {
            temp.push_back(val);
            m[val] = temp.size()-1;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(m.find(val)!=m.end()) {
            int last = temp.back();
            temp[m[val]] = temp.back();
            temp.pop_back();
            m[last] = m[val];
            m.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        return temp[rand()%temp.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
