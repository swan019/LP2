#include <iostream> 
using namespace std;
int main()
{
	string str  = "Hello World";
	int Or, Xor, And;
	
	for(int i = 0; i < str.length(); ++i){
		Or = 127 | str[i];
		cout << Or << " : Or "<< endl;
	}
	for(int i = 0; i < str.length(); ++i){
		And = 127 & str[i];
		cout << And << " : And "<<endl;
	}
	for(int i = 0; i < str.length(); ++i){
		Xor = 127 ^ str[i];
		cout << Xor << " : Xor " << endl;
	}
	
	return 0;
}




		
