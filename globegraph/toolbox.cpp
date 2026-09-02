/*toolbox.cpp*/

#include "toolbox.hpp"

Toolbox::~Toolbox()
{
}

void Toolbox::Destroy() {
    this->~Toolbox();
}

bool Toolbox::PluginListen() {
    if( *this->m_bSignaled ) {
        for( auto i = this->begin(); i != this->end(); i++ ) {
             this->getToolbox();
             float t( 0.5f * 2.0f );
             t++;
             PFN_GET_PLUGIN_NAME(static_cast<const char*>(this->m_ToolBoxName));
        }
    }
}
