/*iprimitives.h*/

#pragma once

#ifndef I_PRIMITIVES_
#define I_PRIMITIVES_

#include "ivector.h"

/*primitive types*/
#define PRIMITIVE_PLANE 1
#define PRIMITIVE_PATCH 2
#define PRIMITIVE_PYRAMID 3
#define PRIMITIVE_CYLINDER 4
#define PRIMITIVE_SPHERE 5
#define PRIMITIVE_CUBE 6

#define MAX_FACES 999

class IPrimitive {
    Vector3 m_Mins;
    Vector3 m_Maxs;
    int m_Type;
    Vector3 m_Color;
    Vector m_fScale;
    const std::string m_Name;
    int m_Sides[MAX_FACES];
public:
    IPrimitive( Vector3& mins, Vector3& maxs, int id, Vector3& color, Vector scale, const std::string& name ) : m_Mins( mins ), m_Maxs( maxs ), m_Type( id ), m_Color( color ), m_fScale( scale ), m_Name( name ){}
    ~IPrimitive();

    inline IPrimitive& getPrimitive() {
        return *this;
    }

    inline Vector3& getMins() {
        return m_Mins;
    }

    inline Vector3& getMaxs() {
        return m_Maxs;
    }

    inline int& getType() {
        return m_Type;
    }

    inline Vector3& getColor() {
        return m_Color;
    }

    inline Vector& getScale() {
        return m_fScale;
    }

    inline const std::string& getName() {
        return m_Name;
    }

    inline int& getSides() {
        return m_Sides;
    }

    inline IPrimitive& begin();
    inline IPrimitive& end();
    virtual void CreatePrimitive( Vector3& mins, Vector3& maxs, int id, Vector3& color, Vector scale, const std::string& name ) = 0;
    virtual void DestroyPrimitive() = 0;
    virtual void Draw() = 0;
    virtual void SetMinsMaxs( Vector3& fMins, Vector3& fMaxs ) = 0;
    virtual void Resize( Vector& scale ) = 0;
    virtual void Translate( Vector3& v ) = 0;
    virtual void Rotate( Vector& deg ) = 0;
    virtual void Select() = 0;
    virtual void Unselect() = 0;
    virtual bool IsSelected() = 0;
    virtual int SetType( int id ) = 0;
    virtual void SetColor( Vector3& fColor ) = 0;
    virtual void SetName( const std::string& _name ) = 0;
    virtual void Filter() = 0;
    virtual bool IsFiltered() = 0;
    
};

#endif
