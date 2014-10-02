#include<iostream>
using namespace std;

int countOnes(int i){
	int res=0;
	while(i!=0){
		i=i&(i-1);
		res++;
	}
	return res;
}

int main(){
	int input;
	while(1){
		cout<<"input a number: ";
		cin>>input;
		cout<<"There are "<<countOnes(input)<<" ones in "<<input<<"'s binary form"<<endl;
	}
}
