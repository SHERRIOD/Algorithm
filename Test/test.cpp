#include<iostream>
using namespace std;
int main(){
    cout<<"Please text a word"<<endl;
     string tmp_s;
    cin>>tmp_s;
    cout<<"Hello World"<<endl;
    for(int i=0;i<5;i++){
        cout<<"type "<<i<<endl;
        cin>>tmp_s;
        cout<<tmp_s;
    }
}