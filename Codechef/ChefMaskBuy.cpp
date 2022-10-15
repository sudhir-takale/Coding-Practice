

#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int x , y;
		cin >> x >> y ;

		int d = x*100;
		int k = y * 10;
		

		

		if(d < k){
			cout << "Disposable" << endl;
		}
       else{
       	cout << "Cloth" << endl;
       }
	}
	return 0;
}
