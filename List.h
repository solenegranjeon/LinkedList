#ifndef LIST_H
#define LIST_H

class List: public Node{
	
	protected:
		Node* head_;
		int nb_elts;
	
	public:
		//Constructors
		List();
		List(const List& model);
		
		//Destructor
		~List();
		
		//Add and substract an element at the end of the list
		void PushBack(Vector newVector);
		void PopBack();
		void Insert(Vector newVector,int position);
		
		//Getter to test if it works
		Node* get_head();
		void Display();
		int get_nelem();
		
};

#endif
