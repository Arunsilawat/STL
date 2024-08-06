#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
   vector<int> v{1,2,3,4,5};
   vector <double> d{22,33.2,55.4,65.88};
   vector<char> v1{'a','b','c','d'};
   vector<int> :: iterator it=v.begin();
   vector<char> :: iterator it1=v1.begin();
   vector<double>::iterator it3=d.begin();
   for(it3=d.begin();it3!=d.end();it3++){
     cout<<*it3<<" ";
   }
   cout<<endl;
   for(it=v.begin();it!=v.end();it++){
       *it=*it+10;
   }
   cout<<endl;
   for(it=v.begin();it!=v.end();it++){
    cout<<*it<<" ";
   }
   cout<<endl;
   for(it1=v1.begin();it1!=v1.end();it1++){
    cout<<*it1<<" ";
   }
   cout<<endl;
   //-----------------------------------------
   cout<<"Front Element :"<<v.front()<<endl;
   cout<<"Last Element:"<<v.back()<<endl;
   v.insert(v.begin()+2,222);
   cout<<v[2];
   cout<<endl;
   print(v);
   cout<<endl;
   //--------search element -----------------
   vector<int>:: iterator element=find(v.begin(),v.end(),3);
   if(element==v.end()){
    cout<<"Not Found";
   }
   else{
    cout<<"Found\n";
    cout<<"Index Number :"<<element-v.begin();
   }
}
