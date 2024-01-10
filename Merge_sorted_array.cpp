//
//  leet_code.cpp
//  C++ Programming
//
//  Created by İlker Feza Çoban on 10.01.2024.
//

#include <iostream>
#include <vector>
using namespace::std;

int main(){
    vector<int> nums1{1,2,3,0,0,0};
    vector<int> nums2{2,5,6};
    int temp = 0, m = (int)nums1.size(), n = (int)nums2.size();

    for (int i = 0; i < n; i++) {
        temp = nums2[i];
        nums1.push_back(temp);
    }
    
    temp = 0;
    for (int i = 0; i < n + m; i++) {
        for (int j = i + 1; j < n + m; j++) {
            if(nums1.at(i) > nums1.at(j)){
                temp = nums1.at(i);
                nums1.at(i) = nums1.at(j);
                nums1.at(j) = temp;
            }
        }
    }
    
    for (int i=0; i<nums1.size(); i++) {
        cout << nums1[i] << " ";
    }
    
    nums1.erase(remove(nums1.begin(), nums1.end(), 0), nums1.end());
    
    cout << "\n\n";
    for (int i=0; i<nums1.size(); i++) {
        cout << nums1[i] << " ";
    }
    
    cout << "\n\n";
    return 0;
}
