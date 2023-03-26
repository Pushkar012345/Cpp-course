/*
#include<iostream>
#include<iterator>
#include<vector>

using namespace std;

int main()
{
    vector<int>ar={1,2,3,4,5};
    
    //declaring iterator to vector
    vector<int>::iterator ptr;

    //displaying vector elements using begin() and end()
    cout<<"The vector elements are:";
    for(ptr=ar.begin();ptr<ar.end();ptr++)
    {
        cout<<*ptr<<" ";
    }

    return 0;

}
*/
/*
#include<iostream>
#include<iterator>
#include<vector>

using namespace std;

int main(){
    vector<int> ar ={1,2,3,4,5};

    //declaring iterator to vector
    vector<int>::iterator ptr=ar.begin();

    //using advance to increment iterator position
    //points to 4
    advance(ptr,3);

    //displaying iterator position
    cout<<"The position of iterator after advancing is:";
    cout<<*ptr<<" ";

    return 0;
}
*/
/*
#include<iostream>
#include<iterator>
#include<vector>

using namespace std;

int main(){
    vector<int> ar ={1,2,3,4,5};

    //declaring iterators to a vector
    vector<int>::iterator ptr=ar.begin();
    vector<int>::iterator ptr=ar.end();

    //using next() to return new iterator
    //points to 4
    auto it = next(ptr,3);

    //using prev to return new iterator
    auto it1 = prev(ptr,3);
    
    //displaying iterator position
    cout<<"The position of new iterator using next() is:";
    cout<<*it1<<" ";
    cout<<endl;

     cout << "The position of new iterator using prev()  is : ";
    cout << *it1 << " ";
    cout << endl;

    return 0;


}
*/

#include<iostream>
#include<iterator>
#include<vector>

using namespace std;

int main(){
    vector<int>ar = {1,2,3,4,5};
    vector<int>ar1= {10,20,30};

    //declaring iterator to  a vector
    vector<int>::iterator ptr=ar.begin();

    //using advance to set position
    advance(ptr,3);

    //copying 1 vect elements in other using inserter
    //inserts ar1 after 3rd position in ar
    copy(ar1.begin(),ar1.end(),inserter(ar,ptr));

    cout<<"The new vector after inserting elements are:";
    for(int &x:ar)
       cout<<x<<" ";

    return 0;
}

