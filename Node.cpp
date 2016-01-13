# include <stdio.h>
#include <math.h>
#include <cassert>
#include <iostream>
#include <cstdlib>
#include "Vector.h"
#include "Node.h"

//Contructors
//Default
Node::Node(){
	next=nullptr;
	Vector v;
	ptrv=new Vector(v);
}

//Copy
Node::Node(const Node& model){
	this->next=model.next;
	this->ptrv=model.ptrv;
}

//Gives a Vector (passage par valeur)
Node::Node(Vector v){
	next=nullptr;
	ptrv=new Vector(v);
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
