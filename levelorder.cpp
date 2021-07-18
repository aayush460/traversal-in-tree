#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
int x;
Node *left,*right;
Node(int c)
{
	x=c;
	left=NULL;
	right=NULL;
}	
};

int main()
{
	Node *start=new Node(1);
	start->left=new Node(2);
	start->right=new Node(3);
	start->left->left=new Node(4);
	start->left->right=new Node(5);
	start->right->left=new Node(6);
	start->right->right=new Node(7);
	
	queue<Node *> q;
	
	q.push(start);
	
	while(q.size())
	{
		Node *temp=q.front();
		cout<<temp->x<<" ";
		q.pop();
		if(temp->left)
		q.push(temp->left);
		if(temp->right)
		q.push(temp->right);
	}
}
