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
void List::PushBack(Vector newVector){
	Node *temporary;
	temporary= new Node();
	temporary=head_;
//On parcourt la liste jusqu'à atteindre le dernier element
	while(temporary!=nullptr){
		temporary=(*temporary).get_next();
	}
	Node *newNode;
	newNode= new Node(newVector);
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
		actuel=(*actuel).get_next(); /**Parenthèses obligatoires pour *actuel**/
		/**QUESTIONS: 
		 * est-ce que actuel=actuel->get_next() marche aussi?**/
	}
	(*prev).set_next(nullptr);
	nb_elts=nb_elts-1;
}

void List::Insert(Vector newVector,int position){
	int pos=1;
	Node *actuel;
	actuel= new Node();
	actuel=head_;
	Node *prev;
	prev= new Node();
	if(pos>nb_elts){
		Node *newNode;
		newNode= new Node(newVector);
		//On parcourt la liste jusqu'à atteindre l'élement à la position p
		while(pos=!position){
			pos=pos+1;
			prev=actuel;
			actuel=(*actuel).get_next();
		}
		/**When we end the while:
 * prev is the address of the element just before the position asked
 * actuel is the address of the element at the position asked
 * **/
		(*newNode).set_next(actuel);
		(*prev).set_next(newNode);
	}

}
