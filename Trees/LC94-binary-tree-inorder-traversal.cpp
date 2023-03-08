class Solution {
public:
    void traversalHelper(vector<int> & output, TreeNode* root){
        if (root){
            traversalHelper(output, root->left);
            output.push_back(root->val);
            traversalHelper(output, root->right);
        }
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> output;
        traversalHelper(output, root);
        return output;
    }
};
