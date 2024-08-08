#include <iostream>
#include <vector>
using namespace std;
int missing_element(vector<int>&v){
    for(int i=0;i<v.size();i++){
        if(i+1!=v[i]){
            return i+1;
        }
    }
}
int main(){
   vector<int> v{1,2,3,4,5,7,8,9,10};
   cout<<missing_element(v);
}
