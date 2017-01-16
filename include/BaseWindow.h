#ifndef BASEWINDOW_H
#define BASEWINDOW_H

#include <Window.h>


class BaseWindow : public Window
{
    public:
        BaseWindow():Window(){}
        BaseWindow(int w, int h):Window(w,h){}
        virtual ~BaseWindow(){}
        void draw(){};
};

#endif // BASEWINDOW_H
