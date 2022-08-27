#include <iostream>
using namespace std;
int main() {
    int i=1,n;
    cin>>n;
    
    
    while(i<=n){
        int j = 1;
      //  int value = i;
        while(j<=i){
            cout<<i-j+1;
        //    value+=1;
            j+=1;
        }
       cout<<endl;
       i+=1;
    }
}
//pattern 
// 1
// 2 1
// 3 2 1 
// 4 3 2 1