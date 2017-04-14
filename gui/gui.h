#ifndef GUI_H
#define GUI_H
#include "makise.h"
#include "makise_gui.h"
#include "makise_e.h"
#include "spi.h"
#include "gpio.h"
//#include "controls_595.h"
#include <stdio.h>
#include <string.h>


extern MHost     *host;
extern MakiseGUI *mGui;
MakiseGUI* gui_init();

//Define user keys
#define M_KEY_USER_ESC        M_KEY_USER_0
#define M_KEY_USER_FOCUS_NEXT M_KEY_USER_0+1
#define M_KEY_USER_FOCUS_PREV M_KEY_USER_0+2
#define M_KEY_USER_TREE       M_KEY_USER_0+3

#endif
