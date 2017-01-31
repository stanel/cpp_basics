#include "CppUTest/TestHarness.h"
#include "StackInt.cpp"

TEST_GROUP(StackIntTest){};

TEST(StackIntTest, CountIsZeroAfterTheStackHasBeenCreated)
{
    StackInt stack;

    CHECK_EQUAL(0, stack.count());
}

TEST(StackIntTest, CountIsOneAfterAnElementIsAddedInStack)
{
    StackInt stack;

    stack.push(111);

    CHECK_EQUAL(1, stack.count());
}

TEST(StackIntTest, CountIsThreeAfterThreeElementsHasBeenAddedInStack)
{
    StackInt stack;

    stack.push(111);
    stack.push(222);
    stack.push(333);

    CHECK_EQUAL(3, stack.count());
}

TEST(StackIntTest, StackIsEmptyAfterItHasBeenCreated)
{
    StackInt stack;

    CHECK_EQUAL(true, stack.isEmpty());
}

TEST(StackIntTest, StackIsNotEmptyAfterAnElementHasBeenAdded)
{
    StackInt stack;

    stack.push(111);

    CHECK_EQUAL(false, stack.isEmpty());
}

TEST(StackIntTest, ExceptionIsThrownIfTheStackIsEmptyAndPopIsCalled)
{
    StackInt stack;

    CHECK_THROWS(InvalidOperationException, stack.pop())
}

TEST(StackIntTest, ExceptionMessageCanBeReafIfTheStackIsEmptyAndPopIsCalled)
{
    StackInt stack;

    try
    {
        stack.pop();
    } 
    catch(InvalidOperationException& e)
    {
        CHECK_EQUAL("Can not pop because the stack is empty!", e.what())
    }
}

TEST(StackIntTest, LastElementPushedIsRetrievedWhenPopIsCalled)
{
    StackInt stack;

    stack.push(111);
    stack.push(222);
    stack.push(333);

    int elementOnTop = stack.pop();
    CHECK_EQUAL(333, elementOnTop);

    elementOnTop = stack.pop();
    CHECK_EQUAL(222, elementOnTop);

    elementOnTop = stack.pop();
    CHECK_EQUAL(111, elementOnTop);    
}

TEST(StackIntTest, StackCanBeEmptied)
{
    StackInt stack;

    stack.push(111);
    stack.push(222);
    stack.push(333);

    stack.pop();
    CHECK_FALSE(stack.isEmpty());

    stack.pop();
    CHECK_FALSE(stack.isEmpty());

    stack.pop();
    CHECK_TRUE(stack.isEmpty());
}
