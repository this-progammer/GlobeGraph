/*toolbox.hpp*/

#pragma once

#ifndef TOOLBOX_HPP
#define TOOLBOX_HPP

#include <string>

#include "iplugin.h"
#include "iprimitives.h"
#include "imousetool.h"

#define TOOLBOX_SIGNAL 1

class Toolbox {
    const std::string m_ToolBoxName;
    int m_nToolboxSignal;
    bool m_bSignaled;
public:
    Toolbox( const std::string& _toolboxname, int nSignal, bool bSignaled ) : m_ToolBoxName( _toolboxname ), m_nToolBoxSignal( nSignal ), m_bSignaled( bSignaled ){}
    ~Toolbox();

    /*get()*/
    inline Toolbox& getToolbox() {
           return *this;
    }

    virtual void Create( const std::string& _name, int nSignl, bool bSignl ) = 0;
    virtual void Destroy() = 0;
    virtual void PluginToAPI( const IPlugin& plugin ) = 0;
    virtual void UnplugFromAPI( const IPlugin& plugin ) = 0;

    virtual bool PluginListen() = 0;

    virtual void AddObject( const std::string& _name, int id ) = 0;
    virtual void RemoveObject( const std::string& _name, int id ) = 0;

    virtual void MouseClick( MouseTool& mouse ) = 0;

    inline Toolbox& begin();
    inline Toolbox& end();

    virtual void SetIcon( const std::string& icon ) = 0;
};

#endif
