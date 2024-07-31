#include <bits/stdc++.h> 
void moveZerosToLeft(int *arr, int n) 
{
    // Write your code here
    vector<int> temp;
    int count = 0;
    for (int i = 0 ; i < n ; i++) {
        if (arr[i] != 0){
            temp.push_back(arr[i]);
            arr[i] = 0;
        }
        else
            count++;
    }
    int j = 0;
    for(int i = count ; i < n ; i++) {
        arr[i] = temp[j++];
    }
}
