#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> matrixDiagonally(vector<vector<int>>& mat) {

    int n = mat.size();
    vector<int> ans;

    // Har diagonal ke liye
    for(int sum = 0; sum <= 2 * n - 2; sum++) {

        vector<int> diagonal;

        // Diagonal ke elements find karo
        for(int i = 0; i < n; i++) {

            int j = sum - i;

            if(j >= 0 && j < n) {
                diagonal.push_back(mat[i][j]);
            }
        }

        // Alternate diagonal ko reverse karo
        if(sum % 2 == 0) {
            reverse(diagonal.begin(), diagonal.end());
        }

        // Answer me add karo
        for(int x : diagonal) {
            ans.push_back(x);
        }
    }

    return ans;
}

int main() {

    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = matrixDiagonally(mat);

    cout << "Diagonal Zig Zag Traversal: ";

    for(int x : result) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}