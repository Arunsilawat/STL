#include <iostream>
#include <vector>
using namespace std;

int main(){
   vector <int> v{23,45,23,23,23,23,45,66,9,11};
   vector <int> v1;
   for(int i:v){
    cout<<i<<" ";
   }
   cout<<endl;
   int flag,countelement=0;
   for(int i:v){
    flag=0;
    for(int j:v1){

        if(i==j){
            flag=1;
            break;
        }
    }
    if(flag==0){
    v1.push_back(i);
    }
   }

    for(int i:v1){
    cout<<i<<" ";
    }
    cout<<endl;
    cout<<countelement<<endl;
}
