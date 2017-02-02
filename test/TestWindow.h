#ifndef TESTWINDOW_H
#define TESTWINDOW_H

#include "Window.h"

#include <cppunit/extensions/HelperMacros.h>

class TestWindow : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestWindow);
    CPPUNIT_TEST(testWindow);
    CPPUNIT_TEST(test1);
    CPPUNIT_TEST(test2);
    CPPUNIT_TEST_SUITE_END();

    public:
        void testWindow();
        void test1(); // constructor test
        void test2(); // test getAT function
    private:

};
#endif // TESTWINDOW_H
