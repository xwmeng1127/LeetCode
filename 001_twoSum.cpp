#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      //存入Map：查找
      map<int, int> myMap;
      for (int i = 0; i < nums.size(); i++) {
        myMap[nums[i]] = i;
      }
      map<int, int>::iterator iter;
      for (iter = myMap.begin(); iter != myMap.end(); iter++) {
        cout << iter->first << iter->second << endl;
      }

      for(int i = 0; i < nums.size(); i++) {
        if (myMap.count(target - nums[i]) == 1 && myMap[target - nums[i]] != i) {
          int j = myMap[target - nums[i]];
          return {i, j};
        }
      }
      return {};
    }
};

void main() {
    
}