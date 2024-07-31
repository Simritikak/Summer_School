#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int check = n/2;
	unordered_map<int, int> count;
	for(int i = 0 ; i < n ; i++) {
		count[arr[i]]++;
	}
	for(auto i : count) {
		if (i.second > check) return i.first;
	}
	return -1;
}
