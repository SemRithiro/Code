#include <iostream.h>
#include <string.h>

struct Library{
	char book[30], author[30];
	int amount;
	struct Library *next;
}Node;
typedef struct Library *pointer;

void create(pointer *plist){
	*plist = NULL;
}

void clear(pointer *plist){
	pointer p = *plist;
	while(p!=NULL){
		delete(p);
		p=p->next;
	}
}

pointer GetNode(){
	struct Library *p;
	p = new Library;
	return p;
}

void freeNode(pointer p){
	delete (p);
}

void insert(pointer *plist, char *name, char *owner, int total){
	pointer p = GetNode();
	strcpy(p->book,name);
	strcpy(p->author,owner);
	p->amount = total;
	p->next = *plist;
	*plist = p;
}

/*pointer search(pointer *plist, char *name){
	pointer p = *plist,q;
	while(p!=NULL){
		if(strcmp(p->book,name)=0)
			q=p;
		else
			q=NULL;
		p=p->next;
	}
	return q;
}*/

void sortBook(pointer *plist){
	pointer p,q,item;
	for(p=*plist;p->next!=NULL;p=p->next)
		for(q=p->next;q!=NULL;q=p->next)
			if(strcmp(p->book,q->book)==0){
				item=p;
				p=q;
				q=item;
			}
}

void show(pointer *plist){
	pointer p = *plist;
	while(p!=NULL){
		cout<<p->book<<"\t"<<p->author<<"\t"<<p->amount<<endl;
		p=p->next;
	}
}

void main(){
	pointer p;
	create (&p);
	insert(&p,"Harry Porter","Rithiro",10);
	insert(&p,"Aarry Porter","Rithiro",10);
	sortBook(&p);
	show(&p);
}