

/* Author: C.F. Sebastien Dalencourt
   Date  : May 17th, 2015
*/

#include <iostream>
#include <vector>
using namespace std;

void getNodes(int &N) {
	cin >> N;
}

void getEdges(int &E) {
	cin >> E;
}

int main ()
{
	int edges, nodes;
	getNodes(nodes);
	getEdges (edges);

	vector < vector <int> > adj_list;

	for(int i = 0; i < nodes; i++) {
		vector <int> v2num_list;
		adj_list.push_back(v2num_list);
	} 
	
	for(int i = 0; i < edges; i++) {
		int nod1, nod2;
		cin >> nod1 >> nod2;
		adj_list[nod1].push_back(nod2);
		adj_list[nod2].push_back(nod1);
	}

	cout <<"YOUR GRAPH:" << endl;

	for(int i = 0; i < nodes; i++) {
		
		cout << "[" << i << "]" << "-> "; 
		
		for(int j = 0; j < adj_list[i].size(); j++) {
			
			if (j == adj_list[i].size() - 1)
				cout << adj_list[i][j];
			else
				cout << adj_list[i][j] << ",";
		}
		cout << endl;
	}

	cout << "CYCLES IN YOUR GRAPH:" << endl;

	vector <vector<int> > cycles;
	int i = 0;
	int j, t;
	
	while(true) {
		
		while(i < adj_list.size() && adj_list[i].size() == 0) {i++;}

		if(i < adj_list.size()) {
			
			cycles.push_back(vector <int> ());
			cycles[cycles.size()-1].push_back(i);
			
			while (adj_list[i].size() > 0) {
				
				j = adj_list[i][0];
				cycles[cycles.size()-1].push_back(j);
				t = j;
				
				adj_list[j].erase(remove(adj_list[j].begin(), adj_list[j].end(), i), adj_list[j].end());
				adj_list[i].erase(remove(adj_list[i].begin(), adj_list[i].end(), j), adj_list[i].end());
				
				i = t;
			}
		}
		else {break;}
	}

	for (int i = 0; i < cycles.size(); i++) {
		
		cout << "Cycle(" << i+1 << "): ";

		for (int j = 0; j < cycles[i].size(); j++) {
			if (j == cycles[i].size()-1)
				cout << cycles[i][j];
			else
				cout << cycles[i][j] << "-> ";			
		}
		cout << endl;
	}
	return 0;
}
