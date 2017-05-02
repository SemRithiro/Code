#include <iostream.h>
struct NodeType{
	int info;
	NodeType *left;
	NodeType *rught;
};
int GetNode(){
	int p;
	p = ptr;
	ptr = Node[ptr].next;
	return p;
}
void main(){
	NodeType *p;
	GetNode();
}