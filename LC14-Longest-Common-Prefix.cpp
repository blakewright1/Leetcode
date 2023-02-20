class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        for (int charPos=0; charPos<200; ++charPos){
            //get current char of the first string
            if (strs[0].size() <= charPos) return prefix;
            char currentChar = strs[0][charPos];

            //check that the rest match
            for (int wordPos=1; wordPos<strs.size(); ++wordPos){
                if (currentChar != strs[wordPos][charPos]) return prefix;
            }

            //if all matched, add the char to the string
            prefix.push_back(currentChar);
        }
        return prefix;
    }
};
