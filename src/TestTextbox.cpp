#include "TestTextbox.h"
#include "Widget.h"
#include "Textbox.h"

#include <iostream>
#include <fstream>
#include <cppunit/extensions/HelperMacros.h>

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION(TestTextbox);

/*
    testTextbox: checks to see if getAt func return an error.
    should not be an assert fail because the getAt func should return an widget error
*/
void TestTextbox::testTextbox()
{
    Coordinate c(1, 1);
    Coordinate a(2, 2);
    string H;
    H = "H";
    Textbox w(c, 1, 1, H);
    CPPUNIT_ASSERT_THROW(w.getAt(a), widget_error);
}
/*
*/
void TestTextbox::test2()
{

}
void TestTextbox::test3()
{
}

