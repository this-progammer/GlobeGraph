/*layertool.h*/

#pragma once

#ifndef LAYER_TOOL_
#define LAYER_TOOL_

/*GIS Layer Image*/

#include <string>

#define LAYER_TOOL_SIGNAL 1

class LayerTool {
  const std::string m_LayerImage;
  int m_Width;
  int m_Height;
  int m_X;
  int m_Y;
public:
    LayerTool( const std::string& layer, int w, int h, int x, int y ) : m_LayerImage( layer ), m_Width( w ), m_Height( h ), m_X( x ), m_Y( y ){}
    ~LayerTool();
};

#endif
