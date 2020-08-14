#include "table.h"

void table::copy_condition(table & src) {
   copy_condition(root, src.root);
}

void table::copy_condition(node * & dest, node * src) {
   if(!src) return;

   if(dest) {
      copy_condition(dest -> left, src);
   } else if(src -> data % 2 == 0) {
      dest = new node;
      dest -> data = src -> data;
      dest -> left = dest -> right = NULL;
      copy_condition(dest -> right, src -> right);
      copy_condition(dest -> left, src -> left);
   } else {
      copy_condition(dest, src -> right);
      copy_condition(dest, src -> left);
   }
}

int main()
{
    table object;
    table copy;
    object.build(); 	//builds a BST
    object.display();	//displays a BST

    /*  PLACE YOUR FUNCTION CALL HERE */
    copy.copy_condition(object);

    copy.display();


    object.display();	//displays again after!
   
    return 0;
}
