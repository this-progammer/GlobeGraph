/*plugin.cpp*/
/*Programmer : Aether*/

#include "include/iplugin.h"

IPlugin::~IPlugin()
{
}

bool IPlugin::Listen() {
    const char* pRef = this->m_Plugin;
    if( pRef ) {
        PFN_GET_PLUGIN_NAME( pRef );
        this->ConnectToAPI();
        this->IncRef();
    }

    if( !pRef ) {
        PFN_GET_PLUGIN_NAME( pRef );
        this->DisconnectToAPI();
        this->DecRef();
    }
}

void IPlugin::IncRef() {
    const char* pRef = this->m_Plugin;
    *pRef++;
}

void IPlugin::DecRef() {
    const char* pRef = this->m_Plugin;
    *pRef--;
}
