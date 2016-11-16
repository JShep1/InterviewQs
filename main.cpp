/*
  Copyright 2016 John Shepherd
 */

#include <iostream>
#include "/home/johnshepherd/InterviewQs/linked_list.h"
int main() {
  linked_list list;
  list.insert_first(10);
  list.insert_first(11);
  list.insert_first(12);
  list.print_list();
  std::cout << std::endl;
  list.reverse_list();
  list.print_list();
  return 0;
}
