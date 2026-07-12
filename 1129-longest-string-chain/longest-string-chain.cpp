class Solution {
public:
    int longestStrChain(vector<string>& words) {
        if (words.size() == 0) {
            return 0;
        }

        if (words.size() == 1) {
            return 1;
        }

        sort(words.begin(), words.end(), [] (const string& a, const string& b) {
            return a.size() < b.size();
        });

        unordered_map<std::string, int> map;
        int best = 1;

        for (const std::string& word : words) {
            map[word] = 1;

            for (int i = 0; i < (int)word.size(); i++) {
                std::string pred = word.substr(0, i) + word.substr(i + 1, (int)word.size());

                auto it = map.find(pred);
                
                if (it != map.end())
                    map[word] = max(map[word], it->second + 1);
            }

            best = max(best, map[word]);
        }
        return best;
    }
};