#ifndef BASEWINDOW_H
#define BASEWINDOW_H

#include <Window.h>

/**
* This class provides a concrete implemenation for Window.
*/
class BaseWindow : public Window
{
    public:
        BaseWindow():Window();

        BaseWindow(int w, int h):Window(w,h);

        virtual ~BaseWindow();

        /**
        * Method does nothing.
        */
        void draw(){};
};

#endif // BASEWINDOW_H
