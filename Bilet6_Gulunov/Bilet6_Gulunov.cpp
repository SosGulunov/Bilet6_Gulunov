#include <iostream>
using namespace std;
#include "Pop.h"


int main()
{
    setlocale(LC_ALL, "rus");
    Graph g;
    g.new_peak();
    g.new_edge(0, 12, 1);
    g.new_peak();
    g.new_edge(0, 14, 2);
    g.new_peak();
    g.new_edge(1, 55, 2);
    g.get_count_edges(2);
    g.get_pick();
}

