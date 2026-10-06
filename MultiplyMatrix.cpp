#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> multiply(vector<vector<int>>& mat1,
                             vector<vector<int>>& mat2) {

    int n = mat1.size();

    vector<vector<int>> result(n, vector<int>(n, 0));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    return result;
}

int main() {

    vector<vector<int>> mat1 = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
    };

    vector<vector<int>> mat2 = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
    };

    vector<vector<int>> result = multiply(mat1, mat2);

    cout << "Result Matrix:" << endl;

    for(int i = 0; i < result.size(); i++) {
        for(int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}