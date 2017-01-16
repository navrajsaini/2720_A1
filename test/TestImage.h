#ifndef TESTIMAGE_H
#define TESTIMAGE_H

#include <cppunit/extensions/HelperMacros.h>
#include "Image.h"

class TestImage : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestImage);
    CPPUNIT_TEST(testImage);
    CPPUNIT_TEST_SUITE_END();

    public:
        void testImage();
    private:

};

#endif // TESTIMAGE_H
