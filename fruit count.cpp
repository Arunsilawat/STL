#include <bits/stdc++.h>
using namespace std;

int main(){
   vector<string> fruit{"apple","pineapple","apple"};
   map<string,int>m;
   for(string s:fruit){
     if(m[s]){
        m[s]=m[s]+1;
     }
     else{
        m[s]=1;
     }
   }
   for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
   }
}
