#include "TestImage.h"
#include "Exceptions.h"
#include "Image.h"
#include "Widget.h"
using namespace std;

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION(TestImage);
/*
    TestImage: check to see if widget_error is thrown when checking if the c (1, 1) Coordinate is within the A (5,5) coordinate
*/
void TestImage::testImage()
{
    Coordinate c(1, 1);
    Coordinate a(5, 5);

    Image i(c, 1, 1);
    CPPUNIT_ASSERT_THROW(i.getAt(a), widget_error);
}
/*
    test1: check if the image made within the coordinate sends an error
*/
void TestImage::test1()
{

    Coordinate a(3, 3);
    Coordinate c(5, 5);
    Image i(c, 4, 3);
    CPPUNIT_ASSERT(i.getAt(a));
}
