#ifndef COORDINATE_H
#define COORDINATE_H

#include <cppunit/extensions/HelperMacros.h>
#include <iostream>
#include "Coordinate.h"

class TestCoordinate : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestCoordinate);
    CPPUNIT_TEST(testCoordinate);
    CPPUNIT_TEST_SUITE_END();

    public:
        void testCoordinate();
    private:

};
#endif // COORDINATE_H
