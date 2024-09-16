#include <iostream>
#include<algorithm>
#include<forward_list>
using namespace std;
int main(){
     forward_list<int> lis;
     lis.push_front(11);
     lis.push_front(12);
     lis.push_front(13);
     lis.push_front(14);
     lis.push_front(15);
    for(int i:lis){
        cout<<i<<" ";
    }
    cout<<endl;
    auto it=find(lis.begin(),lis.end(),122);
    if(it!=lis.end()){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
}
