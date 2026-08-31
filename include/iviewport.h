/*iviewport.h*/

#pragma once

#ifndef I_VIEWPORT_
#define I_VIEWPORT_

#include <Windows.h>

class CViewport {
  HWND m_Viewport;
  bool m_bSleeping;
public:
  CViewport( HWND view, bool bSleep ) : m_Viewport( view ), m_bSleeping( bSleep ){}
  ~CViewport();

  /*Get Viewport*/
  inline CViewport& getViewport() {
      return *this;
  }

  /*Create Viewport Panel*/
  virtual void Create() = 0;
  /*Flush*/
  virtual void Flush() = 0;
  /*Queue*/
  virtual void Queue() = 0;
  /*Draw*/
  virtual void Draw() = 0;
  /*Set Axis View*/
  virtual void SetAxisView( class CAxis& axis ) = 0;
  /*IsSleeping()*/
  virtual bool IsSleeping() = 0;

};

#endif
