#include "TestCoordinate.h"
#include <fstream>
using namespace std;
CPPUNIT_TEST_SUITE_REGISTRATION(TestCoordinate);

/**
    testCoordinate: checks if, when the coordinates are different, it sends an error
*/
void TestCoordinate::testCoordinate()
{
    Coordinate a(5, 3);
    Coordinate b(3, 5);

    CPPUNIT_ASSERT(!(a==b));

}
/**
    test2: checks if the equal operator works when both the coordinates are the same
*/
void TestCoordinate::test2()
{

    Coordinate a(3, 5);
    Coordinate b(3, 5);
    CPPUNIT_ASSERT(a==b);
}
/**
    test3: tests the output operator, and checks if the output is the same as that which is being outputed
*/
void TestCoordinate::test3()
{
    stringstream s;
    Coordinate a(3, 5);
    s << a;
    string q;
    s >> q;
    CPPUNIT_ASSERT(q=="[3,5]");
}
/**
    checks to see if the coordinate takes in negative values
*/
void TestCoordinate::test4()
{
    Coordinate a(-1, -1);
    Coordinate b(1, 1);
    CPPUNIT_ASSERT(!(a==b));
}
