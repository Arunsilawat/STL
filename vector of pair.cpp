#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"How many records do u want to insert :";
    cin>>n;
    vector<pair<int,string>>student_detail;
    int enroll;string name;
    for(int i=0;i<n;i++){
        cout<<"Enter your enroll and Name : ";
        cin>>enroll>>name;
        student_detail.push_back({enroll,name});
    }
    vector<pair<int,string>> :: iterator it;
    for(it=student_detail.begin();it!=student_detail.endl();it++){
        cout<<"Enroll Number : "<<(*it).first<<endl;
        cout<<"Name : "<<(*it).second<<endl;
        cout<<"-----------------------------"<<endl;
    }
}
