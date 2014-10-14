#include<iostream>
using namespace std;

struct Node{
	int val;
	Node* next;
}

Node* merge(Node* p, Node* q){
	if(!p) return q;
	if(!q) return p;
	Node* res=NULL;
	if(p->val<q->val){
		res=p;
		res->next=merge(p->next,q);
	}else{
		res=q;
		res->next=merge(p,q->next);
	}
	return res;
}
