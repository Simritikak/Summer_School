#include <bits/stdc++.h> 
int countNegativeNumbers(vector<vector<int>> &mat)
{
    int count = 0;
    int row = mat.size();
    int col = mat[0].size();
    for (int i  = 0; i < row ; i++) {
        for (int j  = 0 ; j < col ; j++) {
            if (mat[i][j]<0) count++;
        }
    }
    return count;
}
