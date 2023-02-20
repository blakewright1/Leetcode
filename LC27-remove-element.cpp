class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // get the location of the furthest back non value element
        int lastNonValIndex = -1;
        for (int i=nums.size()-1; i>=0; --i){
            if (nums[i] != val){
                lastNonValIndex = i;
                break;
            }
        }
        if (lastNonValIndex == -1) return 0;

        // main loop
        for (int i=0; i<nums.size(); ++i){
            if (lastNonValIndex < i) return lastNonValIndex+1;

            if (nums[i] == val){
                //swap nums[i] to back
                int temp = nums[lastNonValIndex];
                nums[lastNonValIndex] = nums[i];
                nums[i] = temp;

                //move lastNonValIndex up
                for (int j=lastNonValIndex; j>=0; --j){
                    if (nums[j] != val){
                        lastNonValIndex = j;
                        break;
                    }
                }
                --i;
            }
        }  
        return lastNonValIndex+1;
    }
};
