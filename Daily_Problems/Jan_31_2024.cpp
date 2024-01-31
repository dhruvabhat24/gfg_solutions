void insert(struct TrieNode *root, string key)
    {
        TrieNode *node = root;
        
        for(auto ch: key) 
        {
            if(node->children[ch - 'a'] == NULL)
                node->children[ch - 'a'] = new TrieNode();
            
            node = node->children[ch - 'a'];
        }
        
        node->isLeaf = true;
    }

    bool search(struct TrieNode *root, string key) 
    {
        TrieNode *node = root;
        
        for(auto ch: key) 
        {
            if(node->children[ch - 'a'] == NULL)
                return false;
            
            node = node->children[ch - 'a'];
        }
        
        return node->isLeaf;
    }
