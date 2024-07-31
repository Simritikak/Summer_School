#include <bits/stdc++.h> 
int occursOnce(vector<int> &a, int n){
	// Write your code here.
	// unordered_map<int, int> count;
	// for (int i = 0 ; i < n ; i++) {
	// 	count[a[i]]++;
	// }
	// for (int i = 0 ; i < n ; i++) {
	// 	if (count[a[i]] == 1) return a[i];
	// }
	// return -1;

	int value = a[0];
	for (int i = 1 ; i < n ; i++) {
		value ^= a[i];
	}
	return value;
}
