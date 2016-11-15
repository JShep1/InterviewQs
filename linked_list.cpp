#include <iostream>
#include "linked_list.h"
int main(){
	linked_list list;
	list.insert_first(10);
	list.insert_first(11);
	list.insert_first(12);
	list.remove_first();
	list.print_list();
	return 0;	
}
