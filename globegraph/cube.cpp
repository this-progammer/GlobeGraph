/*cube.cpp*/

#include "cube.hpp"
#include "include/imousetool.h"

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
                             for( ;; auto f = cube.m_Sides[k] ) {
                                 // 6 faces select cube...
                                 cube.Select();
                                 cube.IsSelected() = true;
                                     if( !cube.IsSelected() ) {
                                         cube.Unselect();
                                     }
                             }
                             static MouseTool& mouse = nullptr;
                                 if( mouse.getMouseTool().MouseButtonPress( MB_LEFT_CLCK, SHFT ) && cube.IsSelected() >> 1 ) {
                                     cube.Unselect();
                                     std::cout << "Cube %s Selected" << cube.getName() << "\n";
                                 }
                         }
               }
    }
}
