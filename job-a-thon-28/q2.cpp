class Solution {
  public:
    vector<int> findTheRing(int n, int q, vector<int> &arr, vector<vector<int>> &que) {
        // code here
        vector<int> result;
        unordered_map<int, vector<int>> indexMap;
    
        for (int i = 0; i < n; i++)
            indexMap[arr[i]].push_back(i);
    
        for (int i = 0; i < que.size(); i++) {
            int left = que[i][0];
            int right = que[i][1];
            int k = que[i][2];
        
            int num = right - left - k;
            if (indexMap.find(num) == indexMap.end()) {
                result.push_back(0);
            } else {
                vector<int> indices = indexMap[num];
                bool found = false;
                for (int j = 0; j < indices.size(); j++) {
                    if (indices[j] >= left && indices[j] <= right) {
                        result.push_back(1);
                        found = true;
                        break;
                    }
                }
                if (!found)
                    result.push_back(0);
                }
            }
        return result;
    }
};