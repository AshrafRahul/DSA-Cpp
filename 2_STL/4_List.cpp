#include<iostream>
#include<list>

using namespace std;
int main(){
    list<int> l;

    list<int> n(5,100);
    cout<<"printing n: ";
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;

    l.push_back(1);
    l.push_front(2);
    l.push_back(3);
    l.push_front(4);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"after erase: ";
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"size of list: "<<l.size()<<endl;

    return 0;
}