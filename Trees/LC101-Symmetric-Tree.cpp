class Solution {
public:
    //recursive solution
    bool isSymmetricHelper(TreeNode* left, TreeNode* right){
        if ((!left && right) || (left && !right)) return false;
        else if (!left && !right) return true;
        else return ((left->val == right->val) && isSymmetricHelper(left->left, right->right) && isSymmetricHelper(left->right, right->left));
    }
    bool isSymmetric(TreeNode* root) {
        return isSymmetricHelper(root->left, root->right);
    }

};
