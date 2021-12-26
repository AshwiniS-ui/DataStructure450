#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &v){
    sort(v.begin(),v.end());
    int i;
    for(i=0;i<v.size()-1;i++){
        if(v[i] == v[i+1]){
            break;
        }
    }
    return v[i];
};

int main() {
    
    
    vector<int> v;

    v.push_back(2);
    v.push_back(2);
     v.push_back(1);
    v.push_back(2);
  
    cout << "Duplicate ele are:"<< findDuplicate(v);
    
    cout<<endl;

    return 0;

}
