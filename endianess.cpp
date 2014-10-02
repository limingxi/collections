#include<iostream>
using namespace std;

bool endianess(){
	int test;
	char* p;
	test=1;
	p=(char*) &test;
	return (*p);
}


int main(){
	if(endianess())
		cout<<"little endian"<<endl;
	else
		cout<<"big endian"<<endl;
}
