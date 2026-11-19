class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      unordered_set<int> numbers;

      for(int num:nums){
        numbers.insert(num);
      }  
      int longest=0;
      for(int num:numbers){
        if(numbers.find(num-1)!=numbers.end()){
            continue;
        }
        int current=num;
        int length=1;
        while(numbers.find(current+1)!=numbers.end()){
            current++;
            length++;
        }
        longest=max(longest, length);
      }
      return longest;
    }
};
