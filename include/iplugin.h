/*iplugin.h*/

#pragma once

#ifndef I_PLUGIN_H_
#define I_PLUGIN_H_

#define PLUGIN_ID 1

/*Get Plugin Name*/
typedef const char*(PFN_GET_PLUGIN_NAME)(const char* IPLUGIN);

class IPlugin {
  const char* m_Plugin;
public:
  IPlugin( const char* plugin ) : m_Plugin( plugin ){}
  ~IPlugin();

  /*get the plugin*/
  inline IPlugin& getPlugin() {
      return *this;
  }

  /*connect to API*/
  virtual void ConnectToAPI() = 0;
  /*Disconnect to API*/
  virtual void DisconnectToAPI() = 0;
};

#endif
