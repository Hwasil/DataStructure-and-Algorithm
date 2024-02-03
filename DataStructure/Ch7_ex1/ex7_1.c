#include <stdio.h>
#include "traversalBT.h"

int main(void) {
	treeNode* n15 = makeRootNode('C', NULL, NULL);
	treeNode* n14 = makeRootNode('B', NULL, NULL);
	treeNode* n13 = makeRootNode('F', NULL, NULL);
	treeNode* n12 = makeRootNode('B', NULL, NULL);
	treeNode* n11 = makeRootNode('E', NULL, NULL);
	treeNode* n10 = makeRootNode('A', NULL, NULL);
	treeNode* n9 = makeRootNode('D', NULL, NULL);
	treeNode* n8 = makeRootNode('+', n14, n15);
	treeNode* n7 = makeRootNode('*', n12, n13);
	treeNode* n6 = makeRootNode('+', n10, n11);
	treeNode* n5 = makeRootNode('/', n8, n9);
	treeNode* n4 = makeRootNode('A', NULL, NULL);
	treeNode* n3 = makeRootNode('/', n6, n7);
	treeNode* n2 = makeRootNode('-', n4, n5);
	treeNode* n1 = makeRootNode('+', n2, n3);

	printf("\n preorder : ");
	preorder(n1);

	printf("\n inorder : ");
	inorder(n1);

	printf("\n postorder : ");
	postorder(n1);

	return 0;
}