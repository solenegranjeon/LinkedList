#ifndef NODE_H
#define NODE_H

class Node{

	protected:
		Node* next;
		Node* prev;
		Vector* ptrv;
		
	public:
	
		//Constructors
		Node();
		Node(const Node& model);
		Node(Vector v);

		//Getters
		//Gives the element pointed to by ptrv
		Vector get_v();
		//Gives the pointer to the next Node (next)
		Node* get_next();
		Node* get_prev();
		
		//Setters
		void set_next(Node* next_pointer); // Trop dangereux pour mettre en public !
		void set_prev(Node* prev_pointer); // idem
		
		//Destructor
		~Node();
};

#endif
