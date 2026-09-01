/*graph.cpp*/

Graph::~Graph()
{
}

void Graph::SetColumns( int col ) {
     int nDim = this->m_nColumns;
     nDim = col;
     this->getGraph().Queue();
}

void Graph::SetRows( int row ) {
    int nDim = this->m_nRows;
    nDim = row;
    this->getGraph().Queue();
}

void Graph::Draw() {
     int nDim[2] = this->m_nColumns, this->m_nRows;
     glBegin(GL_LINES);
         for( auto i = 0; i < sizeof( this ); i++ ) {
              glVertex2i( nDim[i][0], nDim[i][1] );
              glVertex2i( nDim[i][1], nDim[i][0] );
         }
     glEnd();
}

void Graph::Queue() {
     int bits = 0;
          for( int i = 0; i <= 0; i++ ) {
               while( bits > 0 ) {
                    i++;
                    i + 1;
                    bits += i;
                    bits++;
               }
                    while( bits < 0 ) {
                         --i;
                    }
          }
}
