/*primitives.cpp*/

#include "iprimitives.h"

IPrimitive::~IPrimitive()
{
}

Vector3 g_SelectColor = { 255.0f, 0.0f, 0.0f };

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
     int i = 0;
     this->m_Sides[i] + 1;
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
