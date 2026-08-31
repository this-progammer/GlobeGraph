/*ivector.h*/
/*Programmer : Aether*/

#pragma once

#ifndef I_VECTOR_H
#define I_VECTOR_H

typedef float Vector;
typedef Vector Vector2[2];
typedef Vector Vector3[3];
typedef Vector Vector4[4];
typedef Vector Vector6[6];

class CAxis {
  int ViewType;
  Vector3 ViewPosition;
public:
  CAxis( int vt, Vector3& v ) : ViewType( vt ), ViewPosition( v ){}
  ~CAxis();

  /*get axis*/
  inline CAxis& getAxis() {
      return *this;
  }

  /*get viewtype*/
  const int getViewType() const {
      return this->ViewType;
  }

  /*get view position*/
  const Vector3& getView() const {
      return this->ViewPosition;
  }

  /*clear the views*/
  virtual void ClearViews() = 0;

};

#endif
