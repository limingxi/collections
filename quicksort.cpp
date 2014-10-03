#include<iostream>

using namespace std;

void quicksort(int A[], int left, int right){
	if(left>=right)
		return;
	int pivot=A[(left+right)/2];
	int i=left;
	int j=right;
	while(i<=j){
		while(A[i]<pivot) i++;
		while(A[j]>pivot) j--;
		if(i<=j){
			int tmp=A[i];
			A[i]=A[j];
			A[j]=tmp;
			i++;
			j--;
		}
	}
	if(left<j)
		quicksort(A,left,j);
	if(right>i)
		quicksort(A,i,right);
};

int main(){
	int A[10]={9,3,1,2,5,7,3,1,6,10};
	quicksort(A,0,9);
	for(int i=0;i<10;i++)
		cout<<A[i]<<" ";
}
