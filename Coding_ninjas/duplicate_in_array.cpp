#include <bits/stdc++.h>
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int n = arr.size();
    int value[n - 1] = {0};
    for(int i = 0 ; i < n ; i++) {
        value[arr[i]-1]++;
    }
    for (int i = 0 ; i<n-1;i++) {
        if (value[i] == 2) {
            return i+1;
        }
    }
    return -1;
}
