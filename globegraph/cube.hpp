/*cube.hpp*/

#include "include/iprimitives.h"

#pragma once

#ifndef CUBE_
#define CUBE_

class Cube : public IPrimitive {
public:
      Cube( Vector3& mins, Vector3& maxs, Vector3& color ) : m_Mins( mins ), m_Maxs( maxs ), m_Color( color ){}
      ~Cube();

      inline Cube& getCube() {
            return *this;
      }

      virtual void CreateCube() = 0;
      virtual void DestroyCube() = 0;
};

#endif
