#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string,int>m;
    m["vikas"]=80;
    m["Arun"]=90;
    m["Rahul"]=70;
    m["sonam"]=60;
    m["nidhi"]=50;
    unordered_map<string,int>:: iterator it;
    for(auto it=m.begin();it!=m.end();it++){
        cout<<"First---> "<<(*it).first<<" Second--> "<<(*it).second<<endl;
    }
    cout<<endl;
    for(auto i:m){
         cout<<"First---> "<<i.first<<" Second--> "<<i.second<<endl;
    }
}
