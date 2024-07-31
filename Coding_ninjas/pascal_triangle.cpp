v=#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> tri;
    vector<long long int> temp;
    for (int i = 0 ; i < n ; i++) {
      for (int j = 0 ; j <= i ; j++){
        if (i == j || j == 0) {
            temp.push_back(1);
        }
        else 
          temp.push_back(tri[i-1][j-1] + tri[i-1][j]);
      }
      tri.push_back(temp);
      temp.clear();
    }
    return tri;
}
