#include <iostream>
#include <list>
#include <forward_list>
#include <algorithm>
using namespace std;

int main(){
     list <int> even;
     list <int> odd;
     int n;
     int num;
     cout<<"Enter Number : ";
     cin>>n;
     for(int i=0;i<n;i++){
            cout<<"Enter number : ";
            cin>>num;
        if(num%2==0){
            even.push_back(num);
        }
        else{
            odd.push_back(num);
        }
     }
//      erase
     list <int>::iterator ev=even.begin();
     advance(ev,2);
     even.erase(ev);

     list <int>::iterator it=even.begin();
     for(it=even.begin();it!=even.end();it++){
        cout<<"Even num:"<<*it<<" ";
     }
     //find
     list <int>::iterator fi=find(even.begin(),even.end(),2);
     if(fi!=even.end()){
        cout<<"Found";
     }
     else{
        cout<<"Not Found";
     }
     cout<<endl;
// insert
     list <int>::iterator od=odd.begin();
     advance(od,2);
     odd.insert(od,11);

     for(int i:odd){
         cout<<"Odd Num :"<<i<<" ";
     }

}
