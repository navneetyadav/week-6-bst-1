#include<iostream>
using namespace std;

class Node
	{
		public:
		
		int data;
		//children
		Node* right;
		Node* left;
		
		Node(int value)
			{
			data=value;
			right=NULL;
			left=NULL;			
			
			}		
	
	};

class bist{

public:

Node* root;

bist()
{
root = NULL;
}

void insert(int value)
	{
		insertHelper(root,value);
		
	}	
void insertHelper(Node * curr,int value)
				{
				//base case if curr== null,insert there
				if (root == NULL)
				{
				root = new Node(value);
				
				}
				


				//else compare the curr data with value	
                                //f curr data >value ->move to left and call insertHelper

				else if(value 	< curr->data)
						//if left is NULL,insert it
					{
					if(curr->left==NULL)
								{
								curr->left=new Node(value);
								}
					else{
					insertHelper(curr->left,value);
					}
					}		
				//else move to left and call inserthelper
				else {
					if(curr->right==NULL)
								{
								curr->right=new Node(value);
								}
					else{
					insertHelper(curr->right,value);
					}
					
				     }

				}



																	//IN ORDER,PRE ORDER POST ORDER

void display()
	{
		display2(root);
	}

void display2(Node*curr)
{

//base condition
if(curr==NULL) return;
//display left
display2(curr->left);
//display current
cout<<curr->data<<",";
//display right
display2(curr->right);
//
	}


Node displayfancy(int spaces){
//increase no. of spaces
//disp right
//print required spaces
//disp curr
//disp left
/*
		16
	14
		12
10
		8
	6
		4



			      
*/
}


Node * search(Node*curr,int value){
		//if reached the leaf or value found
		if(curr==NULL || curr->data==value) return curr;
		else if(value<curr->data)
					{
						return search(curr->left,value);
					}
		else
					{
						return search(curr->right,value);
					}

		}


//nest class
//height()
//delete node()


	   };



int main(){
 
bist obj;
obj.insert(10);
obj.insert(1);
obj.insert(12);
obj.insert(13);
obj.insert(14);
obj.insert(15);
obj.display();
return 0;
}


