#include <iostream>

using namespace std;

int globalscope=0;

void foo(){
	int fooscope=1;
	int localscope=2;
	cout << fooscope<<endl;
	cout << localscope<<endl;
}

int main(){
	cout<<globalscope<< endl;
	int localscope=3;
	{
		cout<<localscope<< endl;
		foo();
		int fooscope=200;
		cout<<fooscope<<endl;
		int globalscope = 100; 
		cout<<globalscope<<endl;
	}
	cout<<localscope<<endl;
	cout<<globalscope<<endl;
}
		
