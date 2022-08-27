#include <iostream>
using namespace std;
int main() {
   int i=1, n;
   cin>>n;

   while(i<=n){
       int j;
       j=1;
       while(j<=n){
           cout<<n-j+1;
           j+=1;

       }
       cout<<endl;
       i+=1;
   }
}