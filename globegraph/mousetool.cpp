/*mousetool.cpp*/

#include "include/imousetool.h"

MouseTool::~MouseTool()
{
}

void MouseTool::MouseButtonPress( int pres_x, int pres_y ) {
     static MouseTool& mouse = this->getMouseTool();
     unsigned int nButtons = mouse.m_Button;
           for( auto i = mouse.begin(); i != mouse.end(); i++ ) {
                if( mouse == NULL ) {
                    mouse.~MouseTool();
                }
                  mouse.IsClicked() = true;
                    for( ;; nButtons ) {
                       MouseToCoords( pres_x, pres_y );
                    }
           }
}
