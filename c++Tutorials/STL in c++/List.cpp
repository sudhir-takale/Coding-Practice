

#include<iostream>
#include<bits\stdc++.h>

using namespace std;

int main() {

list<int> l;

l.push_back(34); // to insert new element in list
l.push_back(45);
l.push_back(45);
l.push_back(45);
l.push_back(45);
l.push_back(400);


// cout << l.back();  // reutrn the last element of list

// cout <<l.max_size();// return the max element insert in list

//   l.reverse();// reverse the list

// l.clear();  // delete all element 

// cout <<l.empty();  // return 1 if empty otherwise 0

// l.assign(4, 678); // assign the value of 678 to all the element 

// l.sort();   /// sort  the list


// cout << l.size();

// to print the list we must create the iterator of the list

list<int> :: iterator it;
for ( it = l.begin(); it != l.end(); it++)
{
    cout << *it << " ";
}
// it = l.begin();
// cout << *it; // it gives the first element of the list

// cout << *it+1;  // it gives the second element of the list 

    
    return 0;
}