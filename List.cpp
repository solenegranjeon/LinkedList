#include "Vector.h"
#include "Node.h"
#include "List.h"
#include <iostream>
# include <stdio.h>
# include <string.h>

/**QUESTION: 
 * est-ce que actuel=actuel->get_next() marche aussi? OUI!**/

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

/**PUSH BACK**/
void List::PushBack(Vector newVector){
	Node* temporary; //create a temporary node pointer
	temporary= new Node();
	temporary=head_;
	Node *newNode; //Create a new Node pointing to the newVector
	newNode= new Node(newVector);
	if(temporary!=nullptr){
//On parcourt la liste jusqu'à pointer le dernier element
		while(temporary->get_next()!=nullptr){
			temporary=temporary->get_next();
		}
		//Make the last element point to the new Node
		temporary->set_next(newNode);
		//Make the new element point to the ex last one (prev)
		(*newNode).set_prev(temporary);
	}
	else{
		head_=newNode;
	}
	nb_elts=nb_elts+1;
}

/**POP BACK**/
void List::PopBack(){
	if(nb_elts==0){
		return;
	}
	if(nb_elts==1){
		delete head_;
		head_=nullptr;
		nb_elts=0;
	}
	if(nb_elts>1){
		Node *actuel;
		actuel= new Node();
		actuel=head_;
//On parcourt la liste jusqu'à ce qu'actuel pointe sur le dernier Noeud
		while(actuel->get_next()!=nullptr){
			actuel=actuel->get_next();
		}
		actuel->set_prev(nullptr);
		delete actuel;
		nb_elts=nb_elts-1;
	}
}

/**INSERT 
 * if position is 0 insert at head
 * if position is smaller than the number of elements insert it
 * else nothing happens**/
 
void List::Insert(Vector newVector,int position){
	if(position==0){
		Node *newNode; //Node to insert
		newNode=new Node(newVector);
		newNode->set_next(head_);
		head_=newNode;
		nb_elts=nb_elts+1;
	}
	else{
		if(position>nb_elts-1){
			return;
		}
		else{
			int pos=0;
			Node *actuel;
			actuel= new Node();
			actuel=head_;
			Node *newNode; //Node to insert
			newNode= new Node(newVector);
			//On parcourt la liste jusqu'à atteindre l'élement à la position p
			while(pos<position){
				pos=pos+1;
				actuel=actuel->get_next();
			}
/**When we end the while:
actuel is the address of the element at the position asked
*/
			newNode->set_next(actuel);
			newNode->set_prev(actuel->get_prev());
			actuel->set_prev(newNode);
			actuel=newNode;
			nb_elts=nb_elts+1;
			}
	}
}

//METHODS TO TEST IF THE OTHER WORK
Node* List::get_head(){
	return head_;
}

void List::Display(){
	Node* temporary; //create a temporary node pointer
	temporary= new Node();
	temporary=head_;
	int pos=0;
	
	while(pos<nb_elts-1){
		//~ printf("The adress of the Node %d is %p",i,temporary);
		std::cout<< temporary << std::endl;
		temporary=temporary->get_next();
		pos=pos+1;
	}
}

int List::get_nelem(){
	return nb_elts;
}
