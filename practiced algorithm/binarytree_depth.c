struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

  
int maxDepth(struct TreeNode* root) {
    if(root==NULL)
        return 0;
    else{
        int Ldepth = maxDepth(root->left);
        int Rdepth = maxDepth(root->right);
    }
    if(Ldepth>Rdepth)
        return Ldepth+1;
    else 
        return Rdepth+1;
}