/*
 * undirected_graph.cpp
 *
 *  Created on: 25 Sep 2017
 *      Author: junior
 */


#ifdef __cplusplus
#include "hdbscan/undirected_graph.h"
namespace clustering {

UndirectedGraph::UndirectedGraph(){
	graph_init(this, 0, NULL, NULL, NULL);
}

UndirectedGraph::~UndirectedGraph(){
	graph_clean(this);
}

};
#endif
