int solve(Node *root, int &moves) 
    {
        if(!root) return 0;
        int lN = solve(root->left, moves);
        int rN = solve(root->right, moves);

        moves += abs(lN) + abs(rN);
        return root->key - 1 + lN + rN;
    }
    
    int distributeCandy(Node* root) 
    {
        int moves = 0;
        solve(root, moves);
        return moves;
    }
