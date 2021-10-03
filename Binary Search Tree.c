#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct BST{
	int data;
	struct BST *left;
	struct BST *right;
};

struct BST *create(int data)  
{
	struct BST *p;
	p=(struct BST*)malloc(sizeof(struct BST));
	p->data=data;
	p->left=p->right=NULL;
	return p;
}

struct BST *insert(struct BST *root, int data)
{
	if(root==NULL)
	  return create(data);
	else if(data < (root->data))
	  root->left=insert(root->left, data);
	else if(data > (root->data))
	  root->right=insert(root->right,data);
	return root;
}

struct BST *search(struct BST *root, int data)
{
	if(root==NULL)
	   printf("The element is not found\n");
	else if(data < (root->data))
        root->left=search(root->left, data);
    else if(data > (root->data))
        root->right=search(root->right, data);
    else 
        printf("The element %d is found\n", root->data);
    return root;
}

//function to find the minimum value in a node
struct BST *find_minimum(struct BST *root)
{
    if(root == NULL)
        return NULL;
    else if(root->left!= NULL) 
        return find_minimum(root->left);
	else 
    return root;
}

// funnction to delete a node
struct BST *delete(struct BST *root, int data)
{
    struct BST *p;
    if(root==NULL)
        printf("The element is not found\n");
    else if (data < (root->data))
        root->left = delete(root->left, data);
    else if(data > (root->data))
        root->right = delete(root->right, data);
    else{
    	if(root->left && root->right)
    	{
    		p=find_minimum(root->right);  
			root->data=p->data;
			root->right=delete(root->right, p->data);
		}
    else
    {
        p=root;
        if(root->left==NULL)
          root=root->right;
        else if(root->right==NULL)
          root=root->left;
          free(p);
        }
    }
    
    return root;
}
   
void inorder(struct BST *root)
{
    if(root!=NULL) 
    {
        inorder(root->left); 
        printf(" %d ", root->data);
        inorder(root->right);
    }
}

int main()
{
	int choice, i, n, data;
	struct BST *newnode=NULL;
	do{
		printf("1.Insert\n 2.Search\n 3.Delete\n 4.Inorder\n 5.Exit\n");
		printf("Enter your choice\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: printf("Enter the value of n:");
			        scanf("%d", &n);
			        printf("Enter the data to be inserted\n");
			        for(i=0;i<n;i++){
			        	scanf("%d", &data);
			        	newnode=insert(newnode,data);
					}
					break;
					
			case 2: printf("Enter the element to be searched\n");
			        scanf("%d", &data);
				    newnode=search(newnode,data);
				    break;
				    
			case 3: printf("Enter the element to be deleted\n");
			        scanf("%d", &data);
				    newnode=delete(newnode,data);
				    break;
				    
			case 4: printf("The inorder traversal is--->\n");
			        inorder(newnode);
			        printf("\n");
			        break;
			        
			case 5: printf("Exit\n");
			        break;	  
			        
			default:printf("Wrong Choice\n");		
		}
	} while(choice!=5);
	
	return 0;
}
