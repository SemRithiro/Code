#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream.h>
struct nodetype
{
	int info;
	struct Nodetype *left;
	struct Nodetype *right;
	/*tydef struct Nodetype *pointertype;*/
}
pointertype Getnode()
{
	pointertype p;
	p=(struct Nodetype*) malloc(sizeof(struct Nodetype));
	p->info = item;
	p->left = NULL;
	p->right = NULL;
	return p;
}
void freeNode(pointertype p)
{
	freeNode(0);
}
void initialize(pointertype *proot)
{
	proot=NULL;
}
void make_left(datatype item)
{
	pointertype p;
	if(p==NULL)
		cout<<"\n Empty";
	else
	{
		if(p->left==NULL)
			cout<<"\n Node p has LeftsonNode ";
		else 
			p->left=make-node(item);
	}

}
void make_right(pointertype p,datatype item)
{
	if(p->NULL)
		cout<<"\n Empty";
	else if(p->right==NULL)
		cout<<"\n Node p has RightsonNode";
	else
		p->right=make-node(item);
}
void build tree(int n)
{
	pointertype p;
	datatype item;
	int nl,nr;
	if(n==0)
		return(NULL);
	else
		cout<<"\n input item";	cin>>item;
		nl=n/2;
		nr=n-nl-1;
		p->left=build tree(nl);
		p->right=build tree(nr);
		return p;
	}
struct node* insert(struct node* node, int info)
{
	if (node == NULL)
		return Getnode(info);
	if (info < node->info)
		node->left = insert(node->left, info);
	else
		node->right = insert(node->right, info);
	return node;
}
struct node * minValueNode(struct node* node)
{
	struct node* current = node;
	while (current->left != NULL)
		current = current->left;

	return current;
}

struct node* deleteNode(struct node* root, int info)
{
	if (root == NULL)
		return root;
	if (info < root->info)
		root->left = deleteNode(root->left, info);
	else if (info > root->info)
		root->right = deleteNode(root->right, info);
	else
	{
		if (root->left == NULL)
		{
			struct node *temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL)
		{
			struct node *temp = root->left;
			free(root);
			return temp;
		}
		struct node* temp = minValueNode(root->right);
		root->info = temp->info;
		root->right = deleteNode(root->right, temp->info);
	}
	return root;
}
int main()
{
	clrscr();
	struct node *root = NULL;

	root = insert(root, 20);
	root = insert(root, 60);
	root = insert(root, 35);
	root = insert(root, 82);
	root = insert(root, 90);
	root = insert(root, 56);
	root = insert(root, 70);
	root = insert(root, 30);
	root = insert(root, 95);

	cout("\n Preorder traversal of the given tree ");
	preorder(root);
	getch();
	cout("\n Delete 40\n");
	root = deleteNode(root, 51);
	cout"\n Preorder traversal of the modified tree ";
	preorder(root);
	getch();

	preorder(root);

	return 0;
}