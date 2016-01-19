#ifndef LIST_H
#define LIST_H

class List: public Node{
	
	protected:
		Node* head_;
		int nb_elts; // cohérence style
	
	public:
		//Constructors
		List();
		List(const List& model);
		
		//Destructor
		~List();
		
		//Add and substract an element at the end of the list
		void PushBack(Vector newVector); // const ref
		void PopBack();
		void Insert(Vector newVector,int position); // const ref
		
		//Getter to test if it works
		Node* get_head();
		void Display();
		int get_nelem();
		
};

#endif
