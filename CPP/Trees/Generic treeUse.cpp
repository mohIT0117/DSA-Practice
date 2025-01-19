#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>

using namespace std;

template <typename T>


class TreeNode
{

public:
	T data;
	vector<TreeNode <T> *> children;
	
	TreeNode(T data){
		this->data = data;
		
	}

	~TreeNode(){
		for (int i = 0; i < children.size(); i++)
		{
			delete children[i];
		}
	}
	
	
};



/*
TreeNode<int>* takeInput(){

	int rootData;
	cout<<"Enter Data: ";
	cin>>rootData;

	TreeNode<int>* root = new TreeNode<int>(rootData);

	int n;
	cout<<endl<<"Enter No. children of "<<rootData<<" : ";
	cin>>n;

	for (int i = 0; i < n; i++)
	{
		TreeNode<int>* child = takeInput();
		root->children.push_back(child);
		
	}

	return root;

	delete root;
	
}
*/

TreeNode<int>* takeInputLevelWise(){

	int rootData;
	cout<<"Enter Root Data: ";
	cin>>rootData;

	TreeNode<int>* root = new TreeNode<int>(rootData);

	queue <TreeNode<int>*> pendingNodes;
	pendingNodes.push(root);

	while( pendingNodes.size() != 0 ){
		TreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();

		cout<<"\nEnter No. of children of "<<front->data<<" : ";
		int numChild;
		cin>>numChild;
		for (int i = 0; i < numChild; i++)
		{
			int childData;
			cout<<"\nEnter Data of "<<i<<"th child of "<<front->data<<" :";
			cin>>childData;
			TreeNode<int>* child = new TreeNode<int>(childData);
			front->children.push_back(child);
			pendingNodes.push(child);
		}

	}
	cout<<"\n";
	return root;
}

/*
void printTree(TreeNode <int> *root){

	if (root == NULL)
	{
		return;
	}

	cout<< root->data<<":";

	for (int i = 0; i < root->children.size(); i++)
	{
		cout<< root->children[i]->data <<",";
	}

	cout<<endl;

	for (int i = 0; i < root->children.size(); i++)
	{
		printTree(root->children[i]);
	}

}
*/

/*

int sumOfNodes( TreeNode<int> *root){

	if (root == NULL)
	{
		return 0;
	}

	int ans = root->data;

	for (int i = 0; i < root->children.size(); i++ )
	{
		ans +=  sumOfNodes( root->children[i] );
	}

	
	return ans;

 }


void printTreeLevelWise(TreeNode <int> *root){

		
	queue <TreeNode<int>*> pendingNodes;

	pendingNodes.push(root);

	while( pendingNodes.size() != 0 ){

	TreeNode<int>* front = pendingNodes.front();
	pendingNodes.pop();

	cout<<endl<<front->data<<":";
	for (int i = 0; i < front->children.size(); i++)
	{
		cout<<front->children[i]->data<<",";
		pendingNodes.push(front->children[i]);
	}
	
}

}
*/

/*
void printNodesAtLevelK( TreeNode<int> *root, int k ){
	if (root == NULL)
	{
		return;
	}

	if ( k==0 )
	{
		cout<<root->data<<" ";
		return;
	}

	for (int i = 0; i < root->children.size(); i++)
	{
		printNodesAtLevelK( root->children[i], k-1 );
	}

}


int NumberOfNodes( TreeNode<int>* root){

	if (root == NULL)
	{
		return 0;
	}
	int ans = 1;

	for (int i = 0; i < root->children.size(); i++)
	{
		ans += NumberOfNodes(root->children[i]);
	}

	return ans;

}


int NoOfLeafNodes( TreeNode<int>* root ){
	if ( root == NULL )
	{
		return 0;
	}

	int count = 0;

	if (root->children.size() == 0)
	{
		count = 1;
	}
	else{
		for (int i = 0; i < root->children.size(); i++)
		{
			count += NoOfLeafNodes(root->children[i]);
		}

	}

return count;	

}


void preorderTraversal (TreeNode<int>* root){

	if ( root == NULL )
	{
		return;
	}

	cout<<root->data<<" ";
	for (int i = 0; i < root->children.size(); i++)
	{
		preorderTraversal(root->children[i]);
	}
}


void postorderTraversal(TreeNode<int>* root){
	if ( root == NULL )
	{
		return;
	}

	for (int i = 0; i < root->children.size(); i++ )
	{
		postorderTraversal(root->children[i]);
	}
	cout<<root->data<<" ";
	
}

*/

int heightOfTree( TreeNode<int>* root ){

// edge case
	if ( root == NULL )
	{
		return 0;
	}

	int h = 1;

	if ( root->children.size() == 0 ){
		return h;
	}

	int arr[root->children.size()];
    for( int i=0; i<root->children.size(); i++ )
    {
    	arr[i] = heightOfTree( root->children[i] );
    }

  	
    sort( arr, arr + root->children.size(), greater<int>() );


	
	return h+arr[0];
}


/*
void deleteTree(TreeNode<int>* root){
	if ( root == NULL )
	{
		return;
	}

	for (int i = 0; i < root->children.size(); i++ )
	{
		deleteTree(root->children[i]);
	}
	delete root;
	
}


bool containX( TreeNode<int>* root, int x ){
	
	if ( root->data == x)
	{
		return true;
	}

	bool ans = false;

	for (int i = 0; i < root->children.size(); i++ )
	{
		bool smallAns = containX(root->children[i], x);
		 if(smallAns==true)
            ans=smallAns;
	}

	return ans;
}

int NoOfNodesGreaterThanX( TreeNode<int>* root, int x ){

	if ( root == NULL )
	{
		return 0;
	}

	int count = 0;

	if ( (root->data) > x)
	{
		count = 1;
	}

	for (int i = 0; i < root->children.size(); i++ )
	{
		count += NoOfNodesGreaterThanX(root->children[i], x);
		 
	}

	return count;
}


TreeNode<int>* MaximumChildSum( TreeNode<int>* root ){

	if (root == NULL )
	{
		return NULL;
	}

	TreeNode<int>* ans = root;

	int Sum = root->data;

	for (int i = 0; i < root->children.size(); i++)
	{
		Sum += root->children[i]->data;

	}

	

	for (int i = 0; i < root->children.size(); i++)
	{
		TreeNode<int> *smallAns = MaximumChildSum( root->children[i] );

		int smallSum = smallAns->data;
		
		for (int i = 0; i < smallAns->children.size(); i++)
		{
			smallSum += smallAns->children[i]->data;

		}

		if (smallSum > Sum)
		{
			ans = smallAns;
			Sum = smallSum;
		}
	}

	return 	ans;

}

*/


int main(int argc, char const *argv[])
{
	/*
	TreeNode <int>  *root = new TreeNode <int> (10);
	TreeNode <int>  *node1 = new TreeNode <int> (20);
	TreeNode <int> *node2 = new TreeNode <int> (30);

	root->children.push_back(node1);
	root->children.push_back(node2);
	
	delete node1;
	delete node2;
	*/

	TreeNode <int>  *root = takeInputLevelWise();

	// printTreeLevelWise(root);

	// cout<<"\nNumberOfNodes in the Tree = "<<NumberOfNodes(root);

	// cout<<"\nSum Of Nodes in the Tree = "<<sumOfNodes(root);

	// printNodesAtLevelK(root, 2);

	cout<<"\nHeight of the tree = "<<heightOfTree(root);

	// cout<<"\nNumberOfLeaf Nodes in the Tree = "<<NoOfLeafNodes(root);

	// preorderTraversal(root);

	// postorderTraversal(root);

	// cout<<"\n contain X : "<<containX( root, 11 );

	// cout<<"\nNoOfNodesGreaterThanX = "<<NoOfNodesGreaterThanX(root,10);

	// cout<<"\n MaximumChildSum Node : "<<MaximumChildSum(root)->data;

	// deleteTree( root );

	delete root;

	return 0;
}

// 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0