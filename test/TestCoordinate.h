#ifndef TESTCOORDINATE_H
#define TESTCOORDINATE_H

#include <cppunit/extensions/HelperMacros.h>
#include <iostream>
#include "Coordinate.h"

class TestCoordinate : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestCoordinate);
    CPPUNIT_TEST(testCoordinate);
    CPPUNIT_TEST(test2);
    CPPUNIT_TEST(test3);
    CPPUNIT_TEST(test4);
    CPPUNIT_TEST_SUITE_END();

    public:
        void testCoordinate();
        void test2();
        void test3();
        void test4();
    private:
};
#endif // COORDINATE_H
