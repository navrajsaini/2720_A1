#ifndef TESTTEXTBOX_H
#define TESTTEXTBOX_H

#include "Textbox.h"
#include <iostream>
#include <cppunit/extensions/HelperMacros.h>

class TestTextbox : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestTextbox);
    CPPUNIT_TEST(testTextbox);
    CPPUNIT_TEST_SUITE_END();

    public:
        void testTextbox();
    private:
};

#endif // TESTTEXTBOX_H
