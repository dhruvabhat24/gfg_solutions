bool checkPangram (string s) {
        // your code here
        unordered_map<char, int> charfreq;
        for(char ch: s) {
            charfreq[ch]++;
        }
        
        for(int i=0; i<26; i++) {
            char ch_1 = 'a'+ i;
            char ch_2 = 'A'+ i;
            if(charfreq.find(ch_1) != charfreq.end() || charfreq.find(ch_2) != charfreq.end())
                continue;
            else
                return 0;
        }
        
        return 1;
    }
