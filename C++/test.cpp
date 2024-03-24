#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;

    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        // Traverse top row
        for (int j = left; j <= right; ++j)
            result.push_back(matrix[top][j]);
        top++;

        // Traverse rightmost column
        for (int i = top; i <= bottom; ++i)
            result.push_back(matrix[i][right]);
        right--;

        // Traverse bottom row
        if (top <= bottom) {
            for (int j = right; j >= left; --j)
                result.push_back(matrix[bottom][j]);
            bottom--;
        }

        // Traverse leftmost column
        if (left <= right) {
            for (int i = bottom; i >= top; --i)
                result.push_back(matrix[i][left]);
            left++;
        }
    }

    return result;
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    vector<int> spiral = spiralOrder(matrix);

    // Print the spiral order
    for (int i = 0; i < spiral.size(); ++i) {
        cout << spiral[i] << " ";
    }
    cout << endl;

    return 0;
}
