#include <iostream>
#include <string>
using namespace std;
class Graph {
	
	string vertexes[10];
	int vertexCount = 0;

public:
	int matrix[10][10];
	Graph(){
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				matrix[i][j] = 0;
			}
		}
	
	}

	void AddEdge(int v1, int v2) {
		matrix[v1][v2]++;
		matrix[v2][v1]++;
	}
	void AddVertex(string name) {
		vertexes[vertexCount++]=name;

	}



};
int main()
{
	Graph graph;
	graph.AddVertex("kristina");
	graph.AddVertex("anna");
	graph.AddVertex("ekatrina");
	graph.AddVertex("sasha");


	graph.AddEdge(0, 1);
	graph.AddEdge(1, 2);
	graph.AddEdge(2, 3);
	graph.AddEdge(3, 4);




	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << graph.matrix[i][j]<<" ";
		}
		cout << endl;
	}
}

