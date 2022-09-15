#pragma once
#include <iostream>
using namespace std;
#include <vector>

class Edge
{
public:

	Edge(int w, int dest) {
		this->weight = w;
		this->dest = dest;
	}

	int get_dest() {
		return dest;
	}

	int weight;
	int dest;
};

class Peak
{
public:
	void add_edge(int w, int d)
	{
		mas.push_back(Edge(w, d));
	}

	int count_edge() {
		return mas.size();
	}
	vector <Edge> mas;
};

class Graph
{
public:
	Graph() {

	}

	void new_peak() {
		Vershini.push_back(Peak());
	}

	void get_pick() {
		for (size_t i = 0; i < Vershini.size(); i++)
		{
			for (size_t j = 0; j < Vershini[i].count_edge(); j++)
			{
				cout << i << " - " << Vershini[i].mas[j].dest << " : " << Vershini[i].mas[j].weight << "\n";
			}
		}
	}

	void new_edge(int n, int w, int d) {
		Vershini[n].add_edge(w, d);
	}


	void get_count_edges(int d) {
		int count = 0;
		for (size_t i = 0; i < Vershini.size(); i++)
		{
			for (size_t j = 0; j < Vershini[i].mas.size(); j++)
			{
				if (Vershini[i].mas[j].get_dest() == d) count++;
			}
		}
		cout << "Кол-во рёбер: " << count << "\n";
	}

private:
	vector <Peak> Vershini;
};
