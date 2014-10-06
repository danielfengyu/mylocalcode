#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
struct BinaryTreeNode{
	int value;
	BinaryTreeNode * leftChild;
	BinaryTreeNode * rightChild;
};
 void find_path(BinaryTreeNode *pTreeNode,int exceptedSum,vector<int> &path,int &currentSum)
 {
	if(!pTreeNode )
	{
		return ;
	}
	else
	{
		currentSum += pTreeNode->value;
		path.push_back(pTreeNode->value);
		bool isLeaf=(!pTreeNode->leftChild && !pTreeNode->rightChild);
		if(currentSum==exceptedSum && isLeaf)
		{
			vector<int>::iterator iter=path.begin();
			for(;iter!=path.end();++iter)
			{
				cout<<*iter<<'\t';
			}
			cout<<endl;
		}
		if(pTreeNode->leftChild)
		{
			find_path(pTreeNode->leftChild,exceptedSum,path,currentSum);
		}
		if(pTreeNode->rightChild)
		{
			find_path(pTreeNode->rightChild,exceptedSum,path,currentSum);
		}
		currentSum-=pTreeNode->value;
		path.pop_back();

	}
 }