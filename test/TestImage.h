#ifndef TESTIMAGE_H
#define TESTIMAGE_H

#include <cppunit/extensions/HelperMacros.h>
#include "Image.h"

class TestImage : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestImage);
    CPPUNIT_TEST(testImage);
    CPPUNIT_TEST(test1);
//    CPPUNIT_TEST(test2);
    CPPUNIT_TEST_SUITE_END();

    public:
        void testImage();
        void test1(); // constructor test
 //       void test2(); // test getAT function
    private:

};

#endif // TESTIMAGE_H
