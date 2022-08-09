#include <bits/stdc++.h>
using namespace std;

// create the structure element

struct employee
{

    int salary;
    string name;
    int id;

}; // here we have to use the short name which you want to give for the typedef function

union college
{
    int noOfStudent;
    float collegeFees;
    char collegeUniformColor;
};

int main()
{
    // 'se sudhir' if you use the typedef keyword in the structure
    // struct employee sudhir;

    // sudhir.salary  = 134356;
    // cout<<"the salary of sudhir is "<<sudhir.salary<<endl;
    // sudhir.name = "sudhir hanmant takale";
    // cout<<sudhir.name<<endl;

    // union provides the better dynamic memory performance over the structure

    union college skn;

    // skn.collegeFees = 2314;
    // skn.noOfStudent = 2345646;
    // cout<<"the fees of the college per student is "<<skn.collegeFees<<endl;
    // we can use the given line after next line bcoz it takes only one command at a single time so the previous line will overwrite

    // cout<<"There are "<<skn.noOfStudent<<" learning in the college"<<endl;

    //  Enums gives the number to all the element which are present in the given block

    enum skn
    {
        takale,
        mali,
        bansode,
        shingare,
        patil
    };
    cout << takale << endl;
    // it gives index to all the content of the enum function

    
    return 0;
}