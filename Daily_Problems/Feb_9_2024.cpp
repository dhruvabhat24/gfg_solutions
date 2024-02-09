public:
    int solve(Node* root, bool &ans){
        if(root->left == NULL && root->right == NULL)
            return root->data;
 
        int l = 0, r = 0;
        
        if(root->left)
            l = solve(root->left, ans);
        if(root->right)
            r = solve(root->right, ans);
        
        if(l+r != root->data){
            ans = false;
        }
            
        return root->data;
    }
    int isSumProperty(Node *root)
    {   
        bool ans = true;
        solve(root, ans);
        return ans;
    }
