#include <iostream>
using namespace std;
int e = 0;
int z = 0;
int y = 0;

int main()
{


    
    int t;
    cin >> t;
    while(t --> 0){
        
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a < b)
        {
            e = e + 1;
        }
        if (a < c)
        {
            y = y + 1;
        }
        if (a < d)
        {
            z = z + 1;
        }
        cout << e + y + z << endl;

        t--;
    }
    return 0;
}