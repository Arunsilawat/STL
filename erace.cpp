#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main(){
   list<int> lis{22,33,44,55,66};

   list<int>::iterator it1=lis.begin();
   advance(it1,1);
   lis.erase(it1);

   list<int>::iterator it;
   for(it=lis.begin();it!=lis.end();it++){
    cout<<*it<<" ";
   }
   cout<<endl;
   list<int> :: iterator fi=find(lis.begin(),lis.end(),44);
   if(fi!=lis.end()){
    cout<<"Found";
   }
   else{
    cout<<"Not Found";
   }
}
