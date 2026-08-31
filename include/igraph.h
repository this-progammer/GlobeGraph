/*igraph.h*/

#pragma once

#ifndef I_GRAPH_H
#define I_GRAPH_H

class Graph {
  int m_nColumns;
  int m_nRows;
public:
  Graph( int cols, int rows ) : m_nColumns( cols ), m_nRows( rows ){}
  ~Graph();

    /*get graph*/
    inline Graph& getGraph() {
      return *this;
    }

    /*set columns*/
    virtual void SetColumns( int col ) = 0;
    /*set rows*/
    virtual void SetRows( int row ) = 0;
    /*draw*/
    virtual void Draw() = 0;
    /*queue*/
    virtual void Queue() = 0;

}

#endif
