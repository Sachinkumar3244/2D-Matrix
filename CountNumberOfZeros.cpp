#include<iostream>
#include<vector>
using namespace std;
 int countOfZeros(vector<vector<int>> & mat){
     int count = 0;
     int n = mat.size();

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             if(mat[i][j]==0){
                count++;
             }
        }
     }
     return count;
 }
 int main(){
    vector<vector<int>> matrix = {
        {0,0,1},{0,0,1},{0,1,1}
    };
    cout<<countOfZeros(matrix);
    return 0;
 }