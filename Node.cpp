# include <stdio.h>
#include <math.h>
#include <cassert>
#include <iostream>
#include <cstdlib>
#include "Vector.h"
#include "Node.h"

//Contructors
//Default points to the nil vector
Node::Node(){
	next=nullptr;
	prev=nullptr;
	Vector v;
	ptrv=new Vector(v);
}

//Copy (not sure it works)
Node::Node(const Node& model){
	this->next=model.next;
	this->ptrv=model.ptrv;
	this->prev=model.prev;
}

//Gives a Vector (passage par valeur)
Node::Node(Vector v){ /** Pour que ce contructeur ne soit appelé que dans list ajouter =0 **/
	next=nullptr;
	ptrv=new Vector(v);
	prev=nullptr;
}
	
//Getters
Vector Node::get_v(){
	return *ptrv;
}

Node* Node::get_next(){
	return next;
}

//Setter
void Node::set_next(Node* next_pointer){
	next=next_pointer;
}


//Destructor
Node::~Node(){
	delete ptrv;
}
