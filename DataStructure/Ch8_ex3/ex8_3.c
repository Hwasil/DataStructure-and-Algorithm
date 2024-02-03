#include <stdio.h>
#include "DFS.h"

// p.504 7�� : Ʈ���� ���� �߻� -> ��ĥ �� �ִ� ����� �ؿ���
//		 6�� : visited�� true�� �Ǹ鼭 ������ ������� ������ �߰������� �ʿ�

int main(void) {
	int i;
	graphType* G9;
	G9 = (graphType*)malloc(sizeof(graphType));
	createGraph(G9);
	// �׷��� G9 ���� : ���� u�� ���� ���� (u,v)�� ���Լ����� v�� ū �ͺ���.
	for (i = 0; i < 12; i++)
		insertVertex(G9, i);
	insertEdge(G9, 0, 3);
	insertEdge(G9, 0, 2);
	insertEdge(G9, 0, 1);
	insertEdge(G9, 1, 5);
	insertEdge(G9, 1, 4);
	insertEdge(G9, 2, 6);
	insertEdge(G9, 3, 9);
	insertEdge(G9, 3, 8);
	insertEdge(G9, 3, 7);
	insertEdge(G9, 4, 1);
	insertEdge(G9, 5, 10);
	insertEdge(G9, 5, 1);
	insertEdge(G9, 6, 2);
	insertEdge(G9, 7, 3);
	insertEdge(G9, 8, 11);
	insertEdge(G9, 8, 3);
	insertEdge(G9, 9, 3);
	insertEdge(G9, 10, 5);
	insertEdge(G9, 11, 8);
	printf("\n Ch8_7 �� ���� ����Ʈ ");
	print_adjList(G9);  //G9�� ���� ����Ʈ�� Ȯ�ο����� ���

	printf("\n\n///////////////\n\n���� �켱 Ž�� >> ");
	DFS_adjList(G9, 0);     // 0�� ������ ���� A���� ���� �켱 Ž�� ����

	//getchar();
	return 0;
}

/* Ch8_6
* insertEdge(G9, 0, 5);
	insertEdge(G9, 0, 1);
	insertEdge(G9, 1, 3);
	insertEdge(G9, 1, 2);
	insertEdge(G9, 1, 0);
	insertEdge(G9, 2, 1);
	insertEdge(G9, 3, 6);
	insertEdge(G9, 3, 5);
	insertEdge(G9, 3, 4);
	insertEdge(G9, 3, 1);
	insertEdge(G9, 4, 7);
	insertEdge(G9, 4, 6);
	insertEdge(G9, 4, 3);
	insertEdge(G9, 5, 3);
	insertEdge(G9, 5, 0);
	insertEdge(G9, 6, 4);
	insertEdge(G9, 6, 3);
	insertEdge(G9, 7, 4);
*/

/* Ch8_7
insertEdge(G9, 0, 3);
	insertEdge(G9, 0, 2);
	insertEdge(G9, 0, 1);
	insertEdge(G9, 1, 5);
	insertEdge(G9, 1, 4);
	insertEdge(G9, 2, 6);
	insertEdge(G9, 3, 9);
	insertEdge(G9, 3, 8);
	insertEdge(G9, 3, 7);
	insertEdge(G9, 4, 1);
	insertEdge(G9, 5, 10);
	insertEdge(G9, 5, 1);
	insertEdge(G9, 6, 2);
	insertEdge(G9, 7, 3);
	insertEdge(G9, 8, 11);
	insertEdge(G9, 8, 3);
	insertEdge(G9, 9, 3);
	insertEdge(G9, 10, 5);
	insertEdge(G9, 11, 8);
	*/