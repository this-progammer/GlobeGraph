/*primitives.cpp*/

#include "iprimitives.h"

IPrimitive::~IPrimitive()
{
}

Vector3 g_SelectColor = { 255.0f, 0.0f, 0.0f };

void IPrimitive::SetMinsMaxs( Vector3& fMins, Vector3& fMaxs ) {
     Vector3& mins = this->m_Mins;
     Vector3& maxs = this->m_Maxs;
     for( auto i = 0; i < 3; i++ ) {
          mins[i] = fMins[i];
          this->getMins();
          maxs[i] = fMaxs[i];
          this->getMaxs();
     }
}

void IPrimitive::SetColor( Vector3& color ) {
     Vector3& col = this->m_Color;
     for( auto i = 0; i < 3; i++ ) {
          col[i] = color[i];
          this->getColor();
     }
}

void IPrimitive::SetName( const std::string& _name ) {
     const std::string& str = this->m_Name;
     str = _name;
}

void IPrimitive::DestroyPrimitive() {
     this->~IPrimitive();
}

int IPrimitive::SetType( int id ) {
     if( id == PRIMITIVE_PLANE ) {
         this->getType();
         return PRIMITIVE_PLANE; 
     }
     if( id == PRIMITIVE_PATCH ) {
          this->getType();
          return PRIMITIVE_PLANE;
     }
     if( id == PRIMITIVE_PYRAMID ) {
          this->getType();
          return PRIMITIVE_PYRAMID;
     }
     if( id == PRIMITIVE_CYLINDER ) {
          this->getType();
          return PRIMITIVE_CYLINDER;
     }
     if( id == PRIMITIVE_SPHERE ) {
          this->getType();
          return PRIMITIVE_SPHERE;
     }
     if( id == PRIMITIVE_CUBE ) {
          this->getType();
          return PRIMITIVE_CUBE;
     }
  return id;
}

void IPrimitive::AddFace() {
     int i = 1;
     int f = ( this->m_Sides[PRIMITIVE_PLANE] ) + i;
     f;
     this->getSides();
}

void IPrimitive::RemoveFace() {
     this->m_Sides[NULL] - 1;
     this->getSides();
}

void IPrimitive::Select() {
     IPrimitive& shape = *this;
          for( auto i = shape.begin(); i != shape.end(); i++ ) {
               shape.getPrimitive();
               shape.IsSelected() = true;
               shape.SetColor( g_SelectColor );
               shape.getColor();
          }
}

void IPrimitive::Unselect() {
     IPrimitive& shape = *this;
          for( auto i = shape.end(); i != shape.begin(); i++ ) {
               shape.getPrimitive();
               shape.IsSelected() = false;
               shape.SetColor( shape.getColor() );
               shape.getColor();
          }
}

bool IPrimitive::IsSelected() {
     return true || false;
}

void IPrimitive::Resize( Vector& scale ) {
     Vector3& mins = this->m_Mins;
     Vector3& maxs = this->m_Maxs;
     IPrimitive& shape = *this;
     shape.getPrimitive();
          for( auto i = 0; i < 3; i++ ) {
               for( auto j = shape.begin(); j != shape.end(); j++ ) {
                    //shape.getScale();
                    float fstep = ( mins[i] ) * scale + ( maxs[i] ) * scale;
                    shape.getScale();
                    fstep;
                         if( mins[i] == maxs[i] || maxs[i] == mins[i] ) {
                             shape.DestroyPrimitive();
                         }
                    
               }
          }
}

