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
};

#endif
