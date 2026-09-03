/*notewindow.hpp*/

#ifndef NOTE_WINDOW_
#define NOTE_WINDOW_

#define NOTE_WINDOW_SIGNAL 1

#include <string>

/*pane_dock*/
#include "pane_dock.hpp"

class NoteWindow {
  const std::string _notes;
  const std::string _title;
  int m_nSignal;
  int m_Width;
  int m_Height;
  PaneDockLayout m_DockPane;
public:
    NoteWindow( const std::string& notes, const std::string& title, int nSignal, int w, int h, PaneDockLayout& dock ) : _notes( notes ), _title( title ), m_nSignal( nSignal ), m_Width( w ), m_Height( h ), m_DockPane( dock ){}
    ~NoteWindow();

    inline NoteWindow& getNoteWindow() {
        return *this;
    }

    inline const std::string& getNotes() const {
        return _notes;
    }

    inline const std::string& getTitle() const {
        return _title;
    }

    inline int getSignal() const {
        return m_nSignal;
    }

    inline int getWidth() const {
        return m_Width;
    }

    inline int getHeight() const {
        return m_Height;
    }

    inline PaneDockLayout& getPaneDock() const {
        return m_DockPane;
    }

    virtual void CreateNoteWindow( HWND Window ) = 0; 
    virtual void DestoryNoteWindow() = 0;

    inline HWND& getWindow() const {
        return( HWND );
    }

    virtual void SetNotes( const std::string& newNotes ) = 0;
    virtual void SortPaneDock() = 0;

    virtual bool IsClear() = 0;

    virtual void Clear() = 0;

};

#endif
