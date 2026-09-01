/*imousetool.h*/

#pragma once

#ifndef I_MOUSE_TOOL_
#define I_MOUSE_TOOL_

class MouseTool {
    unsigned int m_Button;
    bool m_bSender;
public:
  MouseTool( unsigned int button, bool bSender ) : m_Button( button ), m_bSender( bSender ){}
  ~MouseTool();

    /*get mouse tool*/
    inline MouseTool& getMouseTool() const {
          return *this;
    }

    virtual void SenderMouseEv() = 0;
    virtual bool IsClicked() = 0;

    virtual void MouseButtonPress( int pres_x, int pres_y ) = 0;
};

#endif
