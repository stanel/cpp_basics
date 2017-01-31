#include "CppUTest/TestHarness.h"
#include "Rectangle.cpp"

TEST_GROUP(FirstTestGroup){};

TEST(FirstTestGroup, ForRange)
{
    int myFirstArray[] = {11, 22, 33, 44, 55};

    CHECK_EQUAL(44, myFirstArray[3]);

    int theSum = 0;
    for (int el : myFirstArray)
    {
        theSum += el;
    }

    CHECK_EQUAL(11 + 22 + 33 + 44 + 55, theSum);
}

TEST(FirstTestGroup, MemberFunctionCanBeCalled)
{
    Rectangle firstRectangle(9, 8);
    int area = firstRectangle.ComputeArea();

    CHECK_EQUAL(72, area);
}

TEST(FirstTestGroup, VariableConstructorInitialization)
{
    int x(23);
    CHECK_EQUAL(23, x);
}

TEST(FirstTestGroup, IncrementOperator)
{
    int a = 123;

    int b = ++a;
    CHECK_EQUAL(124, a);
    CHECK_EQUAL(124, b);

    int c = a++;
    CHECK_EQUAL(125, a);
    CHECK_EQUAL(124, c);
}

TEST(FirstTestGroup, Const)
{
    const int number = 123;
    CHECK_EQUAL(123, number);

    //number = 124; // error: assignment of read only variable;

    const int *pointerToNumber = &number;
    CHECK_EQUAL(123, *pointerToNumber);

    //*pointerToNumber = 124; // error: assignment of read only location;
}

TEST(FirstTestGroup, PointerInitialization)
{
    int number = 123;
    int *p = &number;

    CHECK_EQUAL(123, *p);
    CHECK_EQUAL(4, sizeof(number));
}

TEST(FirstTestGroup, AddressOfAVariableCanBeReadAtRuntime)
{
    Rectangle rectangle(10, 5);

    int areaComputedUsingTheObject = rectangle.ComputeArea();
    Rectangle *pointerToAReactangle = &rectangle;

    int areaComputedUsingThePointerAndTheAddressOfOperator = pointerToAReactangle->ComputeArea();
    CHECK_EQUAL(areaComputedUsingTheObject, areaComputedUsingThePointerAndTheAddressOfOperator);

    int areaComputedUsingAPointerAndDereferenceOperator = (*pointerToAReactangle).ComputeArea();
    CHECK_EQUAL(50, areaComputedUsingAPointerAndDereferenceOperator);
}

int add(int a, int b)
{
    return a + b;
}

TEST(FirstTestGroup, PointerToFunction)
{
    int (*pointerToAFunction)(int, int) = add;

    int result = (*pointerToAFunction)(5,7);
    CHECK_EQUAL(12, result);
}
