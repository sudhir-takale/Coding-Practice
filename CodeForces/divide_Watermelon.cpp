
#include <iostream>
    using namespace std;

int main()
{

    int t, s = 0, m = 0;
    cin >> t;
    
    for (int  i = 0; i < t; i++)
    {
        for (int j = i; j < t; j++)
        {
         s = i;
           m = j;
        }
        
    }
    
    if((s % 2== 0) && (m %2 == 0)) {
        cout << "YES" << endl;
    }

    return 0;
}