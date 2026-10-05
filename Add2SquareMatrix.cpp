#include <iostream>
#include <vector>
using namespace std;

void sumMatrix(vector<vector<int>>& MatrixA, vector<vector<int>>& MatrixB) {

    int n = MatrixA.size();

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            MatrixA[i][j] = MatrixA[i][j] + MatrixB[i][j];
        }
    }
}

int main() {

    vector<vector<int>> a = {
        {1, 2},
        {3, 4}
    };

    vector<vector<int>> b = {
        {4, 3},
        {2, 1}
    };

    sumMatrix(a, b);

    for (int i = 0; i < a.size(); i++) {

        for (int j = 0; j < a[i].size(); j++) {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}