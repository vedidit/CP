#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
public:
	int data;
	Node* next;
};

class LinkedList{
int size;
Node* head;
public:
	LinkedList(){
		size=0;	
		head = NULL;
	}
	
	void insert(int data){
		Node* new_node = new Node;
		new_node->next=NULL;	
		new_node->data=data;
		size++;
		
		if(head == NULL){
			head = new_node;
			cout<<size;
			return;
		}else if(head!=NULL){
			Node* x=head;
			while(x->next!=NULL){
				x = x->next;
			}
			x->next = new_node;
			
		}
		return;
	}
	bool deleteNode(int pos){
		//pos is 1 based indexing 
		if(pos>size){
			return false;
		}
		Node* prev=head,*curr=head;
		for(int i=1;i<pos;i++){
			prev=curr;
			curr = curr->next;
		}
		Node* to=curr->next;
		prev->next=to;
		free(curr);
		size--;
		return true;
	}
	int sizeOfList(){
		return size;
	}
	bool isEmpty(){
		return size==0;
	}
	void display(){
		Node* x=head;
		while(x!=NULL){
			cout<<x->data<<" ";
			x = x->next;
		}
	}
	friend Node* checkHead(LinkedList *obj);
};
Node* checkHead(LinkedList *obj){
	return (obj->head);
}

int main(){
	LinkedList* myList = new LinkedList;
	myList->insert(5);
	myList->insert(6);
	myList->insert(7);
	cout<<"size="<<myList->sizeOfList()<<endl;
	myList->display();
	cout<<myList->deleteNode(3)<<endl;
	myList->display();

}