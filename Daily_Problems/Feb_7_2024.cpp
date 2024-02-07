public:


    unordered_map<Node*, Node*> parent;
    unordered_map<Node* , bool> visited;


    void traversal(Node* root)
    {
        if(root == NULL)return;
        
        if(root->left)
        {
            parent[root->left] = root;
            visited[root->left] = false;
            traversal(root->left);
        }
        
        if(root->right)
        {
            parent[root->right] = root;
            visited[root->right] = false;
            traversal(root->right);
        }
        
    }


    Node* find(Node* root, int value)
    {
        if(root == NULL)return NULL;
        
        if(root->data == value)return root;
        
        Node* ans = find(root->left, value);
        
        if(ans != NULL)return ans;
        
        return find(root->right, value);
    }

    int solve(Node* a, int b)
    {
        if(a == NULL || visited[a])return 1e7;
        
        visited[a] = true;
        
        if(a->data == b)return 0;
        
        int rgt = 1e7;
        int lft = 1e7;
        int par = 1e7;
        
        if(parent[a])par = 1 + solve(parent[a], b);
        if(a->right)rgt = 1 + solve(a->right, b);
        if(a->left)lft = 1 + solve(a->left, b);
        
        visited[a] = false;
        
        return  min(min(lft,rgt), par);
    }

    int findDist(Node* root, int a, int b) {
        
        visited.clear();
        parent.clear();
        
        parent[root] = NULL;
        visited[root] = false;
        
        traversal(root);

        if(a > b)swap(a,b);
        
        Node *aa = find(root,a);

        return solve(aa,b);
    }
