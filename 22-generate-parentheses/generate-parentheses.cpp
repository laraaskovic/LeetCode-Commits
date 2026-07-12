class Solution {
public:
    vector<string> generateParenthesis(int n) {
        // (
        // () ,        ((
        // ()( ,    ((), (((
        // ()(( -> ))   (()( -> )),  ((()))
        vector<string> result;
        backtrack(result, "", 0, 0, n);
        return result;
        
    }
private:
    void backtrack(vector<string>& result, string current, int open, int closed, int n){
        // 2n
        if (current.length() == 2*n) {
            result.push_back(current);
            return;
        }

        // check if we can place another '('
        if (open < n) {
            backtrack(result, current + "(", open + 1, closed, n);
        }

        if (closed < open) {
            backtrack(result, current + ")", open, closed + 1, n);
        }
    }
};