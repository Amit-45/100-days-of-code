class Solution
{
public:
    int small(TreeNode* root, int &k)
    {
        int ans;
        if(root==NULL)
            return 0;
        int left=small(root->left,k);                             
        if(left)    
            return left;
        k--;
        if(k==0)
            return root->val;
      int right=small(root->right,k);
          return right;  
    }
    int kthSmallest(TreeNode* root, int k)
    {
        int ans=small(root,k);
        return ans;
    }
};
