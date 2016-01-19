#include "Vector.h"

class Node {
	public :
		void set_next(Node* n);
		Node* get_next();
		Vector* get_address();
		Node();
		Node(Vector temp);
		Node(const Node& model);
		~Node();
		
	protected :
		Vector* addr;
		Node* next;
	private :
};
