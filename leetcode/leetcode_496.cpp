class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;
        int max = -1, position;
        for (int i = 0 ; i < nums1.size(); i++) {
            max = -1;
            for (int j = nums2.size()-1 ; j >= 0 ; j--) {
                if (nums2[j] > nums1[i]) {
                    max = nums2[j];
                    position = j;
                }
                if (nums1[i] == nums2[j]) {
                    if (j==nums2.size()-1) {
                        answer.push_back(-1);
                        break;
                    }
                    else if (position>j) {
                        answer.push_back(max);
                        break;
                    }
                    else{
                        answer.push_back(-1);
                        break;
                    }
                }
            }
        }
        return answer;
    }
};

