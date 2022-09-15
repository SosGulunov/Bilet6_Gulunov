#pragma once
#pragma once
#include "peak.h"
#include <vector>
class Peak;
class Edge
{
public:
	
	Edge(int w, int dest) {
		this->weight = w;
		this->dest = dest;
	}
	
	
private:
	int weight;
	int dest;
	
};
