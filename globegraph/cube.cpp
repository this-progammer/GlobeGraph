/*cube.cpp*/

#include "cube.hpp"

Cube::~Cube()
{
}

void Cube::DestroyCube() {
    this->~Cube();
}

void Cube::CreateCube() {
     Cube& cube = nullptr;
     cube.getCube();
     Vector3& mins = this->m_Mins;
     Vector3& maxs = this->m_Maxs;
     Vector3& color = this->m_Color;
       for( auto i = cube.begin(); i != cube.end(); i++ ) {
            cube.SetType( PRIMITIVE_CUBE );
               for( auto j = 0; j < 3; j++ ) {
                    cube.CreatePrimitive( mins[i], maxs[i], color[i], PRIMITIVE_CUBE, this->getScale(), this->getName() );
                    cube.SetColor( color[i] );
                    const std::string n = this->m_Name;
                    cube.SetName( n );
                         for( auto k = 0; k < 6; k++ ) {
                                 for(;; k) {
                                     int nSides = cube.m_Sides[k];
                                     cube.getSides();
                                     cube.AddFace(); // add 6 faces...
                                         if( nSides < 6 ) {
                                             cube.DestroyPrimitive();
                                             std::cout << "Cube Invalid Sides... Destroying Cube..." << "\n";
                                         }
                                 }
                         }
               }
       }
}
