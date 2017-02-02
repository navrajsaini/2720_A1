#include "TestWindow.h"
#include "Exceptions.h"
#include "Image.h"
#include "Widget.h"
#include "Textbox.h"
#include "BaseWindow.h"
#include "Window.h"

using namespace std;

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION(TestWindow);

/**
    testWindow: test if exeding max int will result in an error
*/
void TestWindow::testWindow()
{
    CPPUNIT_ASSERT_THROW(BaseWindow(1025, 1025), illegal_size_error);
}
/**
    test1: Test if using max ints for the window results in a error.
*/
void TestWindow::test1()
{
    CPPUNIT_ASSERT_NO_THROW(BaseWindow(1024, 1024));
}

void TestWindow::test2()
{
    Coordinate c(5, 5);
    Image i(c, 100, 100);
    BaseWindow w(0,0);
    CPPUNIT_ASSERT_THROW(w.addWidget(&i), illegal_size_error);
}
