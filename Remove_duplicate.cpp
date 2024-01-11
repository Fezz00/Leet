//
//  Remove_duplicate.cpp
//  CENG241_LABS
//
//  Created by İlker Feza Çoban on 11.01.2024.
//

#include <iostream>
#include <vector>
using namespace::std;

void duplicate(vector<int>& vec);

int main(){
    vector<int> vec{0,0,1,1,1,2,2,3,3,4};
    int temp = (int)vec.size();
    
    duplicate(vec);
    
    for (int i=0; i<temp; i++) {
        if (i<vec.size()) {
            cout << vec[i] << " ";
        }else{
            cout << "_ ";
        }
    }
    
    cout << "\n\n";
    return 0;
}

void duplicate(vector<int>& vec){
    vector<int> temp;
    int count{0};
    for (int i=0; i<vec.size(); i++) {
        temp.push_back(vec[i]);
    }
    
    vec.clear();
    
    for (int i=0; i<temp.size(); i++) {
        for (int j=0; j<vec.size(); j++) {
            if (temp[i] == vec[j]) {
                count++;
            }
        }
        if (count < 1) {
            vec.push_back(temp[i]);
        }
        count = 0;
    }
}
