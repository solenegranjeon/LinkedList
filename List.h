#ifndef LIST_H
#define LIST_H

class List{
	
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
		void PushBack(Node* newNode);
		void PopBack();
		void Insert(Node* newNode,int position);
		
};

#endif