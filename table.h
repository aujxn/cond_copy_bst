//list.h
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct node
{
    int data;   //some questions use char * data;
    node * left;
    node * right;
};

class table
{
    public:
    	//These functions are supplied already
    	table();			//supplied
    	~table();			//supplied
        void build(); 		//supplied
        void display(); 	//supplied


/* ************** PLACE YOUR PUBLIC PROTOTYPE HERE ***************** */
      void copy_condition(table & src);
 
 
 	private:
 		node * root;

/* ************** PLACE YOUR PRIVATE PROTOTYPE HERE ***************** */
      void copy_condition(node * & dest, node * src);
};
  

