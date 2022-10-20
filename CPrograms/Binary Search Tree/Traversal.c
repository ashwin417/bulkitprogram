#include <stdio.h>
#include <stdlib.h>
struct node {
  int data;
  struct node *left, *right;
};

// Create a node
struct node *createnode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->data = item;
  temp->left = temp->right = NULL;
  return temp;
}
void preOrder(struct  node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
 
void postOrder(struct  node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}
 
void inOrder(struct  node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int search(struct node *root, int key){
   struct node *prev = NULL;
   while(root!=NULL){
       prev = root;
       if(key==root->data){
           printf("Cannot insert %d, already in BST", key);
           return 1;
       }
       else if(key<root->data){
           root = root->left;
       }
       else{
           root = root->right;
       }
   }
   return 0;
}
struct node *insert(struct node *node, int key) {
	if(search(node,key)==0){

	 	if (node == NULL){
	  		 return createnode(key);
		}
	  	else if (key < node->data){
	    	node->left = insert(node->left, key);
		}
	  	else{
	    	node->right = insert(node->right, key);
		}
	}
  return node;
}
int main() {
 	struct node *root = NULL;
    int value;
    int r;     	
	printf("The number of items you want to insert: ");
	scanf("%d",&r);
	while(r--){
    	printf("Enter the value you want to insert in binary search tree: ");
    	scanf("%d",&value);
        root=insert(root, value);
		}
	           

	
    printf( "\nInOrder Traversal: ");
  	 inOrder(root);
  	 printf( "\nPreOrder Traversal: ");
  	 preOrder(root);
  	 printf( "\nPostOrder Traversal: ");
  	 postOrder(root);
return 0;

}
