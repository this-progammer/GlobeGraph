/*terraingraph.cpp*/

#include "terraingraph.hpp"

TerrainGraph::~TerrainGraph()
{
}

/*Destroy Graph*/
void TerrainGraph::DestroyGraph() {
     this->getTerrainGraph().DestroyGraph();
}

/*create graph*/
void TerrainGraph::CreateGraph( int nCol, int nRow, bool bDraw ) {
     int nDims[2] = nCol, nRow;
           for( int i = 0; i < 2; i++ ) {
                this->m_Graph.getGraph().SetRows( nDims[i][1] );
                this->m_Graph.getGraph().SetColumns( nDims[i][0] );
           }
           if( bDraw ) {
               this->m_Graph.getGraph().Draw();
           }
}
