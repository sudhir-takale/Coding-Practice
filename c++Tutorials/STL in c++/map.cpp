// Map is used to store the pair of the key and value pairs like python dictionaries

#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<int, string> k;
    k[1] = "Sudhir";
    k[3] = "shaurya";
    k[4] = "suhas";
    k[-23] = "rah";

    map<int, string>::iterator iter;
    iter = k.begin();

cout << k.at(1);

    return 0;
}