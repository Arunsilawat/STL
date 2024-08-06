#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v;
	cout<<"Size of Vector : "<<v.size()<<endl;
	v.push_back(10);
	v.push_back(89);
	v.push_back(109);
	v.push_back(890);
	v.pop_back();
    cout<<"Size of Vector : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i:v){
        cout<<i<<" ";   //range based
    }
        cout<<endl;
    for(int &i:v){
            i=i+10;
     }
         cout<<endl;
     for(int i:v){
        cout<<i<<" ";        }
}
