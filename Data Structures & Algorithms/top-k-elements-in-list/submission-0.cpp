class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>fe;
       for(int num:nums){
        fe[num]++;
       }
       vector<pair<int,int>>fl;
       for(auto& entry:fe){
        fl.push_back({entry.second, entry.first});
       }
       sort(fl.rbegin(), fl.rend());

       vector<int>result;
       for(int i=0;i<k;i++){
        result.push_back(fl[i].second);
       }
       return result;
    }
};
