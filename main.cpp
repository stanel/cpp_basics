#include "CppUTest/CommandLineTestRunner.h"
#include "RectangleTest.cpp"
#include "StackIntTest.cpp"
#include "TemplateTest.cpp"

int main(int ac, char **av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);    
}