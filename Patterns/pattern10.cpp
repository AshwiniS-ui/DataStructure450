#include <iostream>
using namespace std;
int main() {
    int i=1,n;
    cin>>n;
    
    
    while(i<=n){
        int j = 1;
      
        while(j<=n){
          
           char ch = 'A'+j-1;
           cout<<ch;
       
            j+=1;
        }
       cout<<endl;
       i+=1;
    }
}
//pattern 
// AAAA
// BBBB
// CCCC
// DDDD