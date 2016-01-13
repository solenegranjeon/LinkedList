#ifndef NODE_H
#define NODE_H

class Node{

	protected:
		Node* next;
		Vector* ptrv;
		
	public:
	
		//Constructors
		Node();
		Node(const Node& model);
		Node(Vector v);

		//Getters
		//Gives the element pointed by ptrv
		Vector get_v();
		//Gives the pointer to the next Node (next)
		Node* get_next();
		
		//Setters
		void set_next(Node* next_pointer);
		
		//Destructor
		~Node();
};

#endif
