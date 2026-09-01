/*primitives.cpp*/

#include "iprimitives.h"

IPrimitive::~IPrimitive()
{
}

void IPrimitive::SetMinsMaxs( Vector3& fMins, Vector3& fMaxs ) {
     for( auto i = 0; i < 3; i++ ) {
          this->m_Mins[i] = fMins[i];
          this->getMins();
          this->m_Maxs[i] = fMaxs[i];
          this->getMaxs();
     }
}

void IPrimitive::SetColor( Vector3& color ) {
     for( auto i = 0; i < 3; i++ ) {
          this->m_Color[i] = color[i];
          this->getColor();
     }
}

void IPrimitive::SetName( const std::string& _name ) {
     this->m_Name = _name;
}

void IPrimitive::DestroyPrimitive() {
     this->~IPrimitive();
}

