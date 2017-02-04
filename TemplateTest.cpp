#include "MyPair.h"

using namespace std;

TEST_GROUP(TemplateTest){};

TEST(TemplateTest, TemplateClassCanBeCreated)
{
    MyPair<int, int> firstPair;

    firstPair.setFirst(101);    
    firstPair.setSecond(102);

    CHECK_EQUAL(101, firstPair.getFirst());
    CHECK_EQUAL(102, firstPair.getSecond());
}
