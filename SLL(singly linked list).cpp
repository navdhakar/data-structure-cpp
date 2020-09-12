/*
 * SLL(singly linked list) simple implementation.
 * @author:navdeep dhakar
 * this is forward increasing SLL.
 */

#include <iostream>
using namespace std;

struct node{
	int inf;
	node*link;
};//structure of our node
  struct node*head = NULL;//pointer to head which is current node.
  void insert(int data){
	  struct node* new_node = new node();
	  new_node->inf = data;
	  new_node->link  = head; //here we pointed link of our node to next which is null taken from head pointer;
	  head = new_node;//here new node is pointer to this newly created node so our head now point to this new node ajd this new node points towards the null;
  }
  /*             ------   ------
   *  head------>|D||L|-->|D||L|---->NULL
   *             ------   ------
   */
  void display(){
	  struct node*disp;
	  disp = head;
	  while(disp!=NULL){
		  cout<<endl<<disp->inf<<endl;
		  disp  = disp->link;
	  }
  }

  int main(){
	  insert(5);//value to be inserted in SLL
	  insert(1);
	  insert(0);
	  insert(7);
	  cout<<"linked list is";
	  display();
	  cout<<endl;
	  cout<<"current head address"<<head<<endl;
	  cout<<"current head information "<<head->inf;
	  return 0;
  }

