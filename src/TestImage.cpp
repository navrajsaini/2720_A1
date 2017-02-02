#include "TestImage.h"
#include "Exceptions.h"
#include "Image.h"
#include "Widget.h"
using namespace std;

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION(TestImage);
/**
*    TestImage: check to see if widget_error is thrown when checking if the c (1, 1) Coordinate is within the A (5,5) coordinate
**/
void TestImage::testImage()
{
    Coordinate c(1, 1);
    Coordinate a(5, 5);

    Image i(c, 1, 1);
    CPPUNIT_ASSERT_THROW(i.getAt(a), widget_error);
}
/**
*    test1: check if getAt returns a capital I when the coordinate is within the image
**/
void TestImage::test1()
{
    Coordinate c(1, 1);
    Coordinate a(5, 5);

    Image i(c, 1, 1);
    CPPUNIT_ASSERT(i.getAt(c)=='I');
}
/**
    test2: check the edge coordinates for the image created
*/
void TestImage::test2()
{
    Coordinate c(1, 1);
    Coordinate a(0, 1);
    Coordinate b(1, 0);
    Coordinate d(0, 0);

    Image i(c, 1, 1);
    CPPUNIT_ASSERT_NO_THROW(i.getAt(c));
    CPPUNIT_ASSERT_NO_THROW(i.getAt(a));
    CPPUNIT_ASSERT_NO_THROW(i.getAt(b));
    CPPUNIT_ASSERT_NO_THROW(i.getAt(d));
}
