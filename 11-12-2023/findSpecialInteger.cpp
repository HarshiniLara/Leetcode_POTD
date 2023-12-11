class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       int curr = arr[0], cnt = 1, lim = 0.25*arr.size();
       if(arr.size()==1)
       return arr[0];
       for(int i=1; i<arr.size(); i++) {
           if(arr[i]==curr) {
               cnt++;
               if(cnt>lim)
               return arr[i];
           }
           else {
               curr = arr[i];
               cnt = 1;
           }     
       }
       return -1;
    }
};
