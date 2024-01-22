vector<vector<int>>ans;
    void solve(Node* root,int target,vector<int>tem,int sum){
        if(root==NULL)return;
        tem.push_back(root->key);
        sum+=root->key;
        if(sum==target){
            ans.push_back(tem);
        }
        solve(root->left,target,tem,sum);
        solve(root->right,target,tem,sum);
        sum-=root->key;
        tem.pop_back();
    }
    vector<vector<int>> printPaths(Node *root, int tar)
    {   if (root == NULL) return {};
        int sum=0;
        vector<int>tem;
        solve(root,tar,tem,sum);
        return ans;
    }
