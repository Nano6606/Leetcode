QUESTION LINK:- 
https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

SOLUTION:-
class Solution {
public:
    bool check(vector<int>& nums) {
        bool flag = false;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i]<nums[i-1]) {
                if(flag) {
                    return false;
                }
                flag = true;
            }
        }
        if(flag && nums[0]<nums[nums.size()-1]) {
            return false;
        }
        return true;
    }
};
