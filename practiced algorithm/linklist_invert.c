#include <stdio.h>
#include <stdlib.h>

typedef struct nodetree{
    int data;
    struct nodetree *left;
    struct nodetree *right;
}Nodetree;

Nodetree *newNode(int data) 
{
	Nodetree *node;
    node = malloc(sizeof(Nodetree));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return node;
}

Nodetree *Invertree(Nodetree *root){
    if(root){
        root->left = Invertree(root->left);    //遞迴
        root->right = Invertree(root->right);
        Nodetree *temp =  root->left;   //swap套路
        root->left = root->right;
        root->right = temp;
    }
    return root;
}

int main()
{
	Nodetree *root = newNode(4);
	root->left = newNode(2);
	root->right = newNode(7);
	root->left->left = newNode(1);
	root->left->right = newNode(3);
	root->right->right = newNode(9);
	root->right->left = newNode(6);
	//訂好每個節點 再用指標串接
	
	if(root){
	    if(root->left ==NULL){
	        root->left == newNode(i/2=0);
	        break;
	    }
	    if(root->right ==NULL){
	        root->right == newNode(i/2!=0);
	        break;
	    }
	    
	}
    printf("%d,%p\n",newNode(2)->data,newNode(2));
    printf("%d,%p\n",newNode(7)->data,newNode(7));
    
    Nodetree *newroot = Invertree(newNode(1));
	printf("%p",newroot->left);

	return 0;
}