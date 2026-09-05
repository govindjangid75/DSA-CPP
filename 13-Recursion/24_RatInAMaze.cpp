#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Rat in a Maze: Find all paths from (0,0) to (n-1, n-1)
// Allowed moves: Down ('D'), Left ('L'), Right ('R'), Up ('U')
void solveMaze(int r, int c, int n, vector<vector<int>> &maze, vector<vector<bool>> &visited, string path) {
    // Base Case: Reached destination
    if (r == n - 1 && c == n - 1) {
        cout << path << endl;
        return;
    }

    // Mark current cell as visited
    visited[r][c] = true;

    // 1. Down
    if (r + 1 < n && maze[r + 1][c] == 1 && !visited[r + 1][c]) {
        solveMaze(r + 1, c, n, maze, visited, path + "D");
    }
    // 2. Left
    if (c - 1 >= 0 && maze[r][c - 1] == 1 && !visited[r][c - 1]) {
        solveMaze(r, c - 1, n, maze, visited, path + "L");
    }
    // 3. Right
    if (c + 1 < n && maze[r][c + 1] == 1 && !visited[r][c + 1]) {
        solveMaze(r, c + 1, n, maze, visited, path + "R");
    }
    // 4. Up
    if (r - 1 >= 0 && maze[r - 1][c] == 1 && !visited[r - 1][c]) {
        solveMaze(r - 1, c, n, maze, visited, path + "U");
    }

    // Backtrack: Unmark visited so other paths can use this cell
    visited[r][c] = false;
}

int main() {
    int n = 4;
    // 1 indicates open path, 0 indicates blocked wall
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<vector<bool>> visited(n, vector<bool>(n, false));

    cout << "Paths from top-left (0,0) to bottom-right (3,3):\n";
    if (maze[0][0] == 1) {
        solveMaze(0, 0, n, maze, visited, "");
    } else {
        cout << "Start cell is blocked!\n";
    }

    return 0;
}
