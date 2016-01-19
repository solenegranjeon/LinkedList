
#include <stdio.h>
#include <iostream>
#include <math.h>
#include "Node.h"




Node::Node(){
	Vector v2;
	addr=new Vector(v2);
	next =nullptr;
	
}

/**
 * On doit réaliser une copie avec un new pour éviter de perdre 
 * les données, il faudra par contre bien faire un delete pour
 * fermer le new ouvert.
 * */

Node::Node(Vector vec){
	
	addr=new Vector(vec);
	next=nullptr;
}
	
Node::Node(const Node& model){
	addr=model.addr;
	next=model.next;
}

void Node::set_next(Node* n){
	next=n;
}

Node* Node::get_next(){
	return next;
}


Vector* Node::get_address(){
	return addr;
}
Node::~Node(){
	delete addr;
}

