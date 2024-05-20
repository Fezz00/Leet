//
//  22. Generate Parantheses.cpp
//  C++ Programming
//
//  Created by İlker Feza Çoban on 20.05.2024.
//

#include <iostream>
#include <string>
#include <vector>
using namespace::std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> vec;
        string s="", temp="";
        for(int i=0; i<n; i++){
            s += "(";
        }
        for(int i=0; i<n; i++){
            s += ")";
        }

        vec.push_back(s);

        for(int left=n-1; left>0; left--){
            for(int right=n+1; right<n*2; right++){
                temp = s;
                temp[left] = ')';
                temp[right-1] = '(';
                vec.push_back(temp);
            }
        }
        return vec;
    }
};
