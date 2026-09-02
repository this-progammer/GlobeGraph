/*pane_dock.hpp*/

#ifndef PANE_DOCK_
#define PANE_DOCK_

/*panes dock layouts*/
#define DOCK_PANE_CENTRAL 1
#define DOCK_PANE_TOP 2
#define DOCK_PANE_LEFT 3
#define DOCK_PANE_RIGHT 4
#define DOCK_PANE_BOTTOM 5
#define DOCK_PANE_FLOATING 6

class PaneDockLayout {
      int DOCK_PANE_LAYOUT;
public:
    PaneDockLayout( int layout ) : DOCK_PANE_LAYOUT( layout ){}
    ~PaneDockLayout();
};

#endif
