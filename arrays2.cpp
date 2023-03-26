#include<iostream>
#include<vector>

using namespace std;

int main(){
    //declaring vector
    vector<int>v;

    //using push_back(),vector size()
    for(int i=1;i<=5;i++)
    v.push_back(i);

    cout<<"size:"<<v.size();

    //using empty(),begin(),end()
    if(v.empty()==false)
    cout<<"\nVector is not empty";
    else
    cout<<"\nVector is empty";

    cout<<"\nOutput of begin and end";
    for(auto i=v.begin();i!=v.end();++i)
    cout<<*i<<" ";
    
    //using emplace(),begin()
    v.emplace(v.begin(),5);
    cout<<"\nThe first element:"<<v[0];

    //using emplace_back(),size()
    v.emplace_back(20);
    int n=v.size();
    cout<<"\nThe last element is:"<<v[n-1];

    //using clear(),
    v.clear();
    cout<<"\nvector size after erase():"<<v.size();

    return 0;

}