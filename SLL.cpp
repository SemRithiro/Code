#include <iostream.h>

struct NodeType{
	int info;
	struct NodeType *next;
}Node;
typedef struct NodeType *pointertype;

void initialize(pointertype *plist){
	*plist = NULL;
}

void clearList(pointertype *plist){
	pointertype p = *plist;
	while(p!=NULL){
		delete(p);
		p=p->next;
	}
}

pointertype GetNode(){
	struct NodeType *p;
	p = new NodeType;
	return p;
}

void freeNode(pointertype p){
	delete(p); //delete node
}

void insertFirst(pointertype *plist,int item){
	pointertype p = GetNode();
	p->info=item;
	p->next=*plist;
	*plist = p;
}

void insertLast(pointertype p,int item){
	pointertype q=GetNode();
	q->info=item;
	q->next = p->next;
	p->next = q;
}

/*int deleteFirst(pointertype *plist){
	pointertype p = *plist;
	int element = p->info;
	plist = p->next;
	delete(p);
	return element;
}*/

pointertype search(pointertype *plist,int item){
	pointertype p=*plist,q;
	while(p!=NULL){
		if(p->info==item)
			q=p;
		else
			q=NULL;
		p=p->next;
	}
	return q;
}

void sort(pointertype *plist){
	pointertype p,q;
	int item;
	for(p=*plist;p->next!=NULL;p = p->next)
		for(q = p->next;q!=NULL;q = p->next)
			if(p->info == q->info){
				item=p->info;
				p->info = q->info;
				q->info = item;
			}
}

void show(pointertype *plist){
	pointertype p = *plist;
	while(p!=NULL){
		cout<<p->info<<endl;
		p=p->next;
	}
}

void main(){
	pointertype p;
	initialize(&p);
	insertFirst(&p,12);
	insertLast(p,11);
	insertFirst(&p,14);
	insertLast(p,50);
	show(&p);
}