//
//  Remove_element.cpp
//  CENG241_LABS
//
//  Created by İlker Feza Çoban on 10.01.2024.
//

#include <iostream>
#include <vector>
using namespace::std;

int main(){
    vector<int> nums{0,1,2,2,3,0,4,2};
    int choice{0}, counter{0};
    
    cout << "Enter to delete: ";
    cin >> choice;
    
    cout << "\n";
    
    for (int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }
    
    for (int i=0; i < nums.size(); i++) {
        if(nums[i] == choice){
            counter++;
        }
    }
    
    nums.erase(remove(nums.begin(), nums.end(), choice), nums.end());
    
    cout << "\n\n";
    
    for (int i=0; i<nums.size() + counter; i++) {
        if (i >= nums.size()) {
            cout << "_" << " ";
        }else
        cout << nums[i] << " ";
    }
    
    cout << "\n\n";
    return 0;
}
