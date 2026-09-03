/*imap.h*/

#pragma once

#ifndef I_MAP_
#define I_MAP_

#define I_MAP_SIGNAL 1

#include "ivector.h"
#include "iplugin.h"

typedef size_t(*pfn_get_map_size)(const char* MapName);
typedef size_t(*pfn_get_map_size_string)(const std::string& map_name);

typedef bool(pfn_get_map_edit_mode)( bool& boolean );

typedef int(pfn_get_map_signal)();

class IMap {
    const IPlugin m_MapPlugin;
    int m_nSignal;
    const std::string m_MapName;
    size_t m_MapSize;
    bool m_bEditMode;
public:
    IMap( const IPlugin& plugin, int nSignal, const std::string& mapname, size_t mapsize, bool bEdit ) : m_MapPlugin( plugin ), m_nSignal( nSignal ), m_MapName( mapname ), m_MapSize( mapsize ), m_bEditMode( bEdit ){}
    ~IMap();

    /*getPlugin()*/
    inline const IPlugin& getPlugin() const {
        return m_MapPlugin;
    }

    /*getSignal()*/
    inline int getSignal() const {
        return m_nSignal;
    }

    /*getMapName()*/
    inline const std::string& getMapName() const {
        return m_MapName;
    }

    /*getMapSize()*/
    inline size_t getMapSize() const {
        return m_MapSize;
    }

    /*getEditMode()*/
    inline bool getEditMode() const {
        return m_bEditMode;
    }

    /*get()*/
    inline IMap& getMap() {
        return *this;
    }

    /*connect()*/
    virtual void Connect() = 0;
    /*is connected()*/
    virtual bool IsConnected() = 0;
    /*update()*/
    virtual void Update() = 0;
    /*setmap()*/
    virtual void SetMap( const std::string& map ) = 0;
    /*loadmap()*/
    virtual void LoadMap() = 0;
    /*map set map()*/
    virtual void MapSetMap( IMap& map );
};

#endif
