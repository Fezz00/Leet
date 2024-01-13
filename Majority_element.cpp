//
//  Majority_element.cpp
//  CENG241_LABS
//
//  Created by İlker Feza Çoban on 13.01.2024.
//

#include <iostream>
#include <vector>
using namespace::std;

int major(vector<int>& my_vec);

int main(){
    vector<int> vec{2,2,1,1,1,2,2};
    
    cout << major(vec) << endl;
    
    cout << "\n\n";
    return 0;
}

int major(vector<int>& my_vec){
    int size{(int)my_vec.size()}, count{0}, check{0}, elem{0}, elem_2{0};
    
    elem = my_vec[0];
    
    for (int i=0; i<size; i++) {
        if (check==0) {
            if (elem != my_vec[i]) {
                elem_2 = my_vec[i];
                check = 1;
            }
        }
        if (elem == my_vec[i]) {
            count++;
        }else{
            count--;
        }
    }
    
    if (count > 0) {
        return elem;
    }else{
        return elem_2;
    }
}
