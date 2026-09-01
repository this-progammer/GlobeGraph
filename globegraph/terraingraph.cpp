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

/*draw height line*/
void TerrainGraph::DrawHeightLine([[maybe_unused]]Vector3& height) {
     CAxis& axis( YZ, height );
     axis.getAxis();
     axis.ClearViews();
     axis.getViewType();
     axis.getView();
          for( int i = 0; i < 3; i++ ) {
               axis.SetViews( height[i][0], height[i][1], height[i][2] );
               for(;; this->m_Graph ) {
                    int nDims[2] = this->m_Graph->m_nColumns, this->m_Graph->m_nRows;
                         for( int j = 0; j < 2; j++ ) {
                               int calc = ( nDims[j][1] ) / ( nDims[j][0] ) + 1 * 0.5 / 2;
                                   for(;; calc) {
                                        glBegin(GL_LINES);
                                        glVertex3f( height[i][0], height[i][1], height[i][2] );
                                        glEnd();
                                   }
                         }
               }
          }
}
