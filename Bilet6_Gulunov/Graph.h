#pragma once
#include <vector>
#include "Edge.h"
#include "Peak.h"
class Graph
{
public:
	Graph() {
		
	}

	void new_peak() {
		Vershini.push_back(Peak());
		
	}

	void get_pick() {
		
	}

	void new_edge(int n, int w, int d) {
		Vershini[n].add_edge(w,d);
	}

private:
	vector <Peak> Vershini;
	int num;
};