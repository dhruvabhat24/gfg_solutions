bool checkHeight(Node* root, int i = 1, int* maxi = nullptr, int* mini = nullptr) {
        // Base case: if root is null, return true
        if (!root) return true;

        // If maximum and minimum pointers are provided, update maximum and minimum depths
        if (maxi && mini && !root->left && !root->right) {
            *maxi = std::max(*maxi, i);
            *mini = std::min(*mini, i);
        }

        // Recursive calls for left and right subtrees
        return checkHeight(root->left, i + 1, maxi, mini) && checkHeight(root->right, i + 1, maxi, mini);
    }

public:
    // Method to check if the tree is balanced
    bool check(Node* root) {
        // Initialize maximum and minimum depths
        int maxi = 0, mini = INT_MAX;

        // Call recursive method to check height and update depths
        // If maximum and minimum depths are equal, return true; otherwise, return false
        return checkHeight(root, 1, &maxi, &mini) && maxi == mini;
    }
