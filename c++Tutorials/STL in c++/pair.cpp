// if you want to return the pair then we can use the pair function we can take any pair of the datatype

#include<iostream>
#include<bits\stdc++.h>
using namespace std;


int main() {

pair <int, string> l;
pair < string, string> s;
pair < float, int> f;
pair <int,  string > m;
pair<vector<int>, string> v;

    l = { 3456, "sudhir"};
    cout <<l.first << " " << l.second;
   l = {567, "Gaming pro"};
   cout << l.first << l.second;
    

    return 0;
}
