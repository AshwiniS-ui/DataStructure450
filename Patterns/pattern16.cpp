#include <iostream>
using namespace std;
int main() {
    int i=1,n;
    cin>>n;
     
   
    while(i<=n){
        int j = 1;
        char ch = 'A'+ n - i;
        while(j<=i){
           
           
           cout<<ch;
           ch+=1;
            j+=1;
        }
       cout<<endl;
       i+=1;
    }
}
//pattern
// D
// CD
// BCD
// ABCD