#pragma once
#include <vector>
#include "Edge.h"
class Edge;
class Peak
{
public:
	void add_edge(int w,int d)
	{
		mas.push_back(Edge(w,d));
		
	}

	int count_edge() {
		return mas.size();
	}



	
private:
	std::vector <Edge> mas;
	int number = 0;
};