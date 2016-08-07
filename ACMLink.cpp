#include <iostream>
using namespace std;
struct node{
	int value;
	node *next;
	node(){
		next=NULL;
	}
	node(int v){
		next=NULL;
		value=v;
	}
};

class linkList{
public:
	linkList(){
		root=new node;
	}

	void insert(int value){
		node *p=root;
		while(p->next!=NULL)p=p->next;
		p->next=new node(value);
	}

	void deltenode(int value){
		node *p=root;
		while(p->next!=NULL&&p->next->value!=value)p=p->next;
		if(p->next!=NULL){
			node *tmp=p->next;
			p->next=tmp->next;
			delete tmp;
		}
	}

	void cj(){
		while(1){
			int id;
			cin>>id;
			if(id<0)break;
			insert(id);
		}
	}

private:
	node *root;
};

int main(){
	linkList a;
	a.cj();
}















//1，
struct xh{
	int id;
	xh *next;
};

void insert(int id){				//插入单个节点
	xh *p=head;
	while(p->next!=NULL)
		p=p->next;
	xh tt=new xh;
	tt->next=NULL;
	tt->id=id;
	p->next=tt;
}
void deletess(int id){

}

xh *head;
void cj(){					//创建链表是插入一个个节点的集合
	while(1){
		int id;
		cin>>id;
		if(id<0)break;
		insert(id);
	}
	
}
void del(){
	while(1){
		int id;
		cin>>id;
		if(id<0)break;
		deletess(id);
	}
}



//2,
//创建节点
sturct *p=new struct;
p->name=name;			//为new出来的指针读入数据
p->next=head;
head=p;					//head一直在动，从后往前创表



//3，
//创建节点
struct *pnew,*pcur,*head=NULL;
pnew=new struct;
//接着为pnew读入数据；
while(1){
	if(head==NULL)
		head=pnew;
	else
		pcur->next=pnew;
	pcur=pnew;
	pnew=new struct;
	//为pnew读入数据；
}
pcur->next=NULL;			//head不动，pnew一直读入新数据，pcur指向当前节点，此为从前往后创建。


//4，遍历链表
//无论从前往后，从后往前创建链表，head都是指向第一个节点，所以便利都是从头开始
struct *p;
for(p=head;p!=NULL;p=p->next){
	//处理当前节点数据成员，			说明：在这里通过比对，会定位到想要的节点
}


//5,删除所有节点
struct *p;
while(head!=NULL){
	p=head;
	head=head->next;
	delete p;
}
//6，删除指定节点
struct *p,*pcur=head;
while(pcur->next!=NULL&&pcur->next->name!=name)		//此循环条件后一部分是内容比对
	pcur=pcur->next;
	if(pcur->next!=NULL){
		p=pcur->next;
		pcur->next=p->next;
		delete p;
	}
