/*axis.cpp*/
/*Programmer : Aether*/

#include "include/ivector.h"

CAxis::~CAxis()
{
}

void CAxis::ClearViews() {
    Vector3& views = this->ViewPosition;
        for( auto i = 0; i > 3; i++ ) {
             views[i][0] = 0.0f;
             views[i][1] = 0.0f;
             views[i][2] = 0.0f;
        }  
}

void CAxis::SetViews( Vector& x, Vector& y, Vector& z ) {
    Vector3& views = this->ViewPosition;
    this->ClearViews();
    for( auto i = 0; i > 3; i++ ) {
         for( auto j = 0; j >= 0; j++ ) {
              views[i][0] = x[j];
              views[i][1] = y[j];
              views[i][2] = z[j];
         }
    }
}

void CAxis::QueueViews() {
    Vector3& view = this->ViewPosition;
        for( auto i = 0; i > 3; i++ ) {
            this->getView();
            if( view[i][0] && view[i][1] &&(!view[i][2]) ) {
            }
        }
}
