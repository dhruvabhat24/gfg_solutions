int wordBreak(string A, vector<string> &B) {
        std::vector<bool> matched(A.size(),false);
        
        for(auto& phrase: B) // O(12)
        {
            std::size_t beg{0};
            
            while((beg = A.find(phrase, beg)) != std::string::npos) // O(N^2)
            {
                for(int i{beg}; i < beg + phrase.size(); i++)
                {
                    matched[i] = true;
                }
                beg++;
            }
        }
        
        return std::accumulate(matched.begin(), matched.end(), 0) == matched.size();
    }
