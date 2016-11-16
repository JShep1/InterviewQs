#include <iostream>

struct node{
	int data;
	node *next;
};

class linked_list{

	private:

		node *head;
		int length;

	public:

		linked_list(){
			node *head = NULL;// = new node;
			this->head = head;
			this->length = 0;
		}

		void insert_first(int data){
			node *node_to_insert = new node;
			node_to_insert->data = data;
			node_to_insert->next = this->head;
			this->head = node_to_insert;
			this->length++;
			return;
		}

		int remove_first(){
			node *tempNode = NULL;
			int tempInt = -1;
			if(this->length == 0){
				std::cout<<"List already empty."<<std::endl;
			}else{
				tempNode = this->head;
				tempInt = this->head->data;
				this->head = this->head->next;
				this->length--;
				delete tempNode;
			}
			return tempInt;
		}

		void reverse_list(){
			node *prevNode = NULL;
			node *currentNode = this->head;
			node *afterNode = this->head->next;
			if (this->length <= 1){
				return;
			}else{//rotate pointers
				while(currentNode != NULL){
					currentNode->next = prevNode;
					prevNode = currentNode;
					currentNode = afterNode;
					if(currentNode == NULL){
						break;
					}
					afterNode = currentNode->next;
				}
				this->head = prevNode;
			}
			return;
		}
		
		void print_list(){
			node *currentNode = this->head;
			while(currentNode != NULL){
				std::cout<<currentNode->data<<std::endl;
				currentNode = currentNode->next;	
			}
			return;
		}

		~linked_list(){
			while(this->length > 0){
				this->remove_first();
			}
	
			delete this->head;
			return;
		}
};
