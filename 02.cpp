#include<iostream>
using namespace std;

int main(){
	while (true)
	{
		string i;
		cout<<"ur text>";
		getline(cin, i);

		if (i == "exit"){
			cout<<"good bye"<<endl;
			return 0;
		}
		
		cout<<i<<endl;

	}
}
