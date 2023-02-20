class Solution {
    public int removeDuplicates(int[] nums) {
        int count = 0;
        for (int i=1; i<nums.length; ++i){
            if (count == nums.length-1){
                return i;
            }
            if (nums[i] == nums[i-1]){
                //swap current to the end of the array
                for (int j=i; j<nums.length-1; ++j){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
                --i;
            }
            count++;
        }
        return nums.length;
    }
}
