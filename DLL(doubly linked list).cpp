/*
 * DLL(Doubly linked list) simple implementation.
 * @author:navdeep dhakar
 * this is forward increasing SLL.
 */

#include <iostream>
using namespace std;

struct node{
	int inf;
	node*next;
	node*prev;
};
struct node*head = NULL;
void insertbeg(int data){
	struct node*new_node = new node();
	new_node->inf = data;
	new_node->next = head;
	new_node->prev = NULL;
	head = new_node;
}
/*void insertpos(int index, int data){
	struct node*new_node = (struct node *)malloc(sizeof(struct node));
	struct node*trav;
	trav = head;
	int i=0;
	while(i<index-1 && trav!=NULL)
	        {
	            trav = trav->next;
	            i++;
	        }
	new_node->inf = data;
	new_node->next = trav->next;
	new_node->prev = trav;
}*/
void display(){
	  struct node*disp;
	  disp = head;
	  while(disp!=NULL){
		  cout<<endl<<disp->inf<<endl;
		  disp  = disp->next;
	  }
 }

int main(){
  insertbeg(2);
  insertbeg(7);
  insertbeg(5);
  insertbeg(3);
  insertbeg(4);
  insertbeg(8);
  //insertpos(3, 9);
  display();
  return 0;
}
