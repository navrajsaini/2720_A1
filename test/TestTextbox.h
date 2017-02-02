#ifndef TESTTEXTBOX_H
#define TESTTEXTBOX_H

#include "Textbox.h"
#include <iostream>
#include <cppunit/extensions/HelperMacros.h>

class TestTextbox : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestTextbox);
    CPPUNIT_TEST(testTextbox);
    CPPUNIT_TEST(test2);
    CPPUNIT_TEST(test3);
    CPPUNIT_TEST_SUITE_END();

    public:
        void testTextbox();
        void test2();
        void test3();
    private:
};

#endif // TESTTEXTBOX_H
