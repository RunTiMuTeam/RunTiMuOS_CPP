#include <iostream>
#include <string>
using namespace std;
int main(){
	while (true){
		string a;
		cin >> a;
		if (a == "quit"){
			break;
		}
		else if (a == "about"){
			cout << "Version:1.0" << endl;
		}
		else{
			cout << "Can't find" << "'" << a << "'" << endl;
		}
	}
	return 0;
}
