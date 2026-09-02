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
             PFN_GET_PLUGIN_NAME( static_cast<const char*>( this->m_ToolBoxName ) );
        }
    }
}

void Toolbox::AddObject( const std::string& _name, int id ) {
     for( auto i = this->begin(); i != this->end(); i++ ) {
          if(_name.empty()) {
              continue;
          }
          _name.reserve(_name.max_size());
          const std::string typeName = _name;
          if( id == PRIMITIVE_PLANE ) {
              IPrimitive& node = nullptr;
                  for( auto it = node.begin(); it != node.end(); it++ ) {
                       node.getPrimitive();
                       node.m_Type = id;
                       node.getType();
                       node.SetName( typeName );
                       node.getName();
                  }
          }
          if( id == PRIMITIVE_PATCH ) {
              IPrimitive& node = nullptr;
                  for( auto it = node.begin(); it != node.end(); it++ ) {
                       node.getPrimitive();
                       node.m_Type = id;
                       node.getType();
                       node.SetName( typeName );
                       node.getName();
                  }
          }
          if( id == PRIMITIVE_PYRAMID ) {
                IPrimitive& node = nullptr;
                  for( auto it = node.begin(); it != node.end(); it++ ) {
                       node.getPrimitive();
                       node.m_Type = id;
                       node.getType();
                       node.SetName( typeName );
                       node.getName();
                  }
          }
          if( id == PRIMITIVE_CYLINDER ) {
                IPrimitive& node = nullptr;
                  for( auto it = node.begin(); it != node.end(); it++ ) {
                       node.getPrimitive();
                       node.m_Type = id;
                       node.getType();
                       node.SetName( typeName );
                       node.getName();
                  }
          }
          if( id == PRIMITIVE_SPHERE ) {
                IPrimitive& node = nullptr;
                  for( auto it = node.begin(); it != node.end(); it++ ) {
                       node.getPrimitive();
                       node.m_Type = id;
                       node.getType();
                       node.SetName( typeName );
                       node.getName();
                  }
          }
          if( id == PRIMITIVE_CUBE ) {
                IPrimitive& node = nullptr;
                  for( auto it = node.begin(); it != node.end(); it++ ) {
                       node.getPrimitive();
                       node.m_Type = id;
                       node.getType();
                       node.SetName( typeName );
                       node.getName();
                  }
          }
     }
    std::cout << typeName << "\n";
}

void Toolbox::RemoveObject( const std::string& _name, int id ) {
     const std::string name = _name;
     name.erase();
     id = NULL;
}
