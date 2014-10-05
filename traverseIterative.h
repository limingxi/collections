#include<iostream>
#include<vector>

using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x), left(NULL),right(NULL){}
};

class Tree{
	TreeNode* root;
public:
	Tree(TreeNode* node){root=node;}
	void preorderTrav(){
		vector<TreeNode*> stack;
		if(root==NULL)
			return;
		TreeNode *cur=root;
		while(cur!=NULL||stack.size()!=0){
			if(cur==NULL){
				cur=stack[stack.size()-1]->right;
				stack.pop_back();
				continue;
			}
			cout<<cur->val<<endl;
			stack.push_back(cur);
			cur=cur->left;	
		}
	}
	void inorderTrav(){
		vector<TreeNode*> stack;
		if(root==NULL)
			return;
		TreeNode* cur=root;
		while(cur!=NULL||stack.size()!=0){
			if(cur==NULL){
				cur=stack[stack.size()-1];
				cout<<cur->val<<endl;
				cur=cur->right;
				stack.pop_back();
				continue;
			}
			stack.push_back(cur);
			cur=cur->left;
		}
	}
	void postorderTrav(){
		TreeNode* last=NULL;
		vector<TreeNode*> stack;
		if(root==NULL)
			return;
		TreeNode* cur=root;
		do{
            		while(cur){
                		if(cur->right)
                    		stack.push_back(cur->right);
               			stack.push_back(cur);
                		cur=cur->left;
            		}
            		cur=stack.back();
            		stack.pop_back();
            		if(cur->right&&cur->right==stack.back()){
                		stack.pop_back();
                		stack.push_back(cur);
                		cur=cur->right;
            		}else{
                		cout<<cur->val<<endl;
                		cur=NULL;
            		}
        	}while(stack.size()>0);
	}	
};
