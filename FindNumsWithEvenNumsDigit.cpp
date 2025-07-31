class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int i = 0;
        int result = 0;
        while(i < nums.size()){
            if ( (10 <= nums[i] && nums[i] < 100) || 
            (1000 <= nums[i] && nums[i] <= 9999) || 
            (nums[i] == 100000)){
                result++;
            }
            i++;
        }
        i = 0;
        return result;
    }
};