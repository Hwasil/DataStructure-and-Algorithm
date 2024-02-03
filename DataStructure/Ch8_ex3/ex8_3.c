#include <stdio.h>
#include "DFS.h"

// p.504 7번 : 트리라서 문제 발생 -> 고칠 수 있는 사람은 해오기
//		 6번 : visited가 true가 되면서 스택이 비워지는 조건이 추가적으로 필요

int main(void) {
	int i;
	graphType* G9;
	G9 = (graphType*)malloc(sizeof(graphType));
	createGraph(G9);
	// 그래프 G9 구성 : 정점 u에 대한 간선 (u,v)의 삽입순서는 v가 큰 것부터.
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
	printf("\n Ch8_7 의 인접 리스트 ");
	print_adjList(G9);  //G9의 인접 리스트를 확인용으로 출력

	printf("\n\n///////////////\n\n깊이 우선 탐색 >> ");
	DFS_adjList(G9, 0);     // 0번 정점인 정점 A에서 깊이 우선 탐색 시작

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