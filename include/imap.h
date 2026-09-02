/*imap.h*/

#pragma once

#ifndef I_MAP_
#define I_MAP_

#define I_MAP_SIGNAL 1

#include "ivector.h"
#include "iplugin.h"

typedef size_t(*pfn_get_map_size)(const char* MapName);
typedef size_t(*pfn_get_map_size_string)(const std::string& map_name);

typedef int(pfn_get_map_signal)();

class IMap {
    const IPlugin m_MapPlugin;
    int m_nSignal;
    const std::string m_MapName;
    size_t m_MapSize;
public:
    IMap( const IPlugin& plugin, int nSignal, const std::string& mapname, size_t mapsize ) : m_MapPlugin( plugin ), m_nSignal( nSignal ), m_MapName( mapname ), m_MapSize( mapsize ){}
    ~IMap();
};

#endif
