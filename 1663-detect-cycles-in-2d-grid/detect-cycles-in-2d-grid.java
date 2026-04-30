class Solution {

    int[][] directions = {{0,1}, {1,0}, {0,-1}, {-1,0}};  // ✅ ADD THIS

    public boolean containsCycle(char[][] grid) {
        int rows = grid.length;
        int cols = grid[0].length;
        
        boolean[][] visited = new boolean[rows][cols];
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (!visited[i][j]) {
                    if (dfs(grid, visited, i, j, -1, -1, grid[i][j])) {
                        return true;
                    }
                }
            }
        }
        
        return false;
    }

    private boolean dfs(char[][] grid, boolean[][] visited,
                        int r, int c, int pr, int pc, char ch) {
        
        if (visited[r][c]) return true;

        visited[r][c] = true;

        for (int[] dir : directions) {
            int nr = r + dir[0];
            int nc = c + dir[1];

            if (nr >= 0 && nr < grid.length && nc >= 0 && nc < grid[0].length
                && grid[nr][nc] == ch) {

                if (nr == pr && nc == pc) continue;

                if (dfs(grid, visited, nr, nc, r, c, ch)) {
                    return true;
                }
            }
        }
        return false;
    }
}