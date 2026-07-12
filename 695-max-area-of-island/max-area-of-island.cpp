class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        int maxArea = 0;

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c] == 1) {
                    maxArea = max(maxArea, dfs(grid, r, c));
                }
            }
        }
        return maxArea;
    }

private:
    int dfs(vector<vector<int>>& grid, int r, int c) {
        //check bounds
        if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size()) {
            return 0;
        }

        if (grid[r][c] == 0) {
            return 0;
        }

        grid[r][c] = 0;

        int area = 1;
        //go in all 4 directions recursively
        area += dfs(grid, r+1, c);
        area += dfs(grid, r-1, c);
        area += dfs(grid, r, c+1);
        area += dfs(grid, r, c-1);

        return area;
    }
};