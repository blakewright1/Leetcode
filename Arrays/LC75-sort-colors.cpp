class Solution {
public:
    void sortColors(vector<int>& nums) {
        //two pass approach
        // int red = 0, white = 0, blue = 0;
        // for (int num: nums){
        //     if (num == 0) ++red;
        //     else if (num == 1) ++white;
        //     else ++blue;
        // }

        // for (int i=0; i<nums.size(); ++i){
        //     if (red>0){
        //         nums[i] = 0;
        //         --red;
        //     } else if (white>0){
        //         nums[i] = 1;
        //         --white;
        //     } else {
        //         nums[i] = 2;
        //     }
        // }
        
        //two pointers one pass
        int red = 0, white = 0;
        for (int i=0; i<nums.size(); ++i){
            if (nums[i] == 0){
                swap(nums[i], nums[white]);
                swap(nums[white], nums[red]);
                ++red;
                ++white;
            } else if (nums[i] == 1){
                swap(nums[i], nums[white]);
                ++white;
            }
        }

    }
};
