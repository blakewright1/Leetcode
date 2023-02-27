class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // loop in order
        // if positive, set the pos of that num in the array to negative
        // if negative, set to 0

        // put all valid indices at their position in the array if not already done
        for (int i=0; i<nums.size(); ++i){
            int currNum = nums[i];
            if (currNum>0 && currNum<=nums.size() && nums[currNum-1] != currNum){
                //swap
                nums[i] = nums[currNum-1];
                nums[currNum-1] = currNum;
                --i; //need to check the same position again since it has a new value
            }
        }

        //now find the first element that is not what we expect
        for (int i=0; i<nums.size(); ++i){
            if (nums[i] != i+1) return i+1;
        }

        return nums.size()+1;
    }
};
