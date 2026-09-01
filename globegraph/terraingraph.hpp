/*terraingraph.hpp*/

#pragma once

#ifndef TERRAIN_GRAPH_
#define TERRAIN_GRAPH_

#include "include/igraph.h"
#include "include/ivector.h"

class TerrainGraph {
    Graph& m_Graph;
    const char* constexpr m_Name("TERRAIN::GRAPH\n");
public:
  TerrainGraph( Graph& graph ) : m_Graph( graph ){}
  ~TerrainGraph();

      inline TerrainGraph& getTerrainGraph() {
            return *this;
      }

      virtual void CreateGraph(int nCol, int nRow, bool bDraw) = 0;
      virtual void DestroyGraph() = 0;
      virtual void DrawHeightLine(vec3_t& height) = 0;
}

#endif
