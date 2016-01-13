//http://www.codeproject.com/Articles/24684/How-to-create-Linked-list-using-C-C

#include "Vector.h"
#include "Node.h"
#include "List.h"

//Contructors
//Default (empty list)
List::List(){
	head_=nullptr;
	nb_elts=0;
}

//Copy
List::List(const List& model){
	this->head_=model.head_;
	this->nb_elts=model.nb_elts;
}

//Destructor
List::~List(){
	delete head_;
}

//Add and substract an element at the end of the list
void List::PushBack(Node* newNode){
	Node *temporary;
	temporary= new Node();
	temporary=head_;
//On parcourt la liste jusqu'à atteindre le dernier element
	while(temporary!=nullptr){
		temporary=temporary->get_next();
	}
	temporary=newNode;
	nb_elts=nb_elts+1;
}

void List::PopBack(){
	Node *actuel;
	actuel= new Node();
	actuel=head_;
	Node *prev;
	prev= new Node();
//On parcourt la liste jusqu'à atteindre l'avant dernier element
	while(actuel!=nullptr){
		prev=actuel;
		actuel=actuel->get_next();
	}
	prev->set_next(nullptr);
	delete actuel;
	delete prev;
	nb_elts=nb_elts-1;
}

void List::Insert(Node* newNode,int position){
}
