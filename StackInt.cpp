#include "InvalidOperationException.cpp"
#include "NodeInt.cpp"

class StackInt
{
  public:
    StackInt()
    {
        _count = 0;
        _pointerToTheTop = nullptr;
    }

    ~StackInt()
    {
        while(_pointerToTheTop != nullptr)
        {
            NodeInt* pointerToTheCurrentNode = _pointerToTheTop;
            _pointerToTheTop = pointerToTheCurrentNode->getPointerToTheNextNode();

            delete pointerToTheCurrentNode;
        }

        _count = 0;        
    }

    int count()
    {
        return _count;
    }

    bool isEmpty()
    {
        return _count == 0;
    }

    void push(int number)
    {
        NodeInt *pointerToTheCurrentNode = new NodeInt(number, _pointerToTheTop);
        _pointerToTheTop = pointerToTheCurrentNode;
        
        _count++;
    }

    int pop()
    {
        if (isEmpty())
            throw InvalidOperationException("Can not pop because the stack is empty!");

        NodeInt *pointerToTheCurrentNode = _pointerToTheTop;
        _pointerToTheTop = pointerToTheCurrentNode->getPointerToTheNextNode();

        int elementOnTheTop = pointerToTheCurrentNode->getValue();

        delete pointerToTheCurrentNode;
        _count--;

        return elementOnTheTop;
    }

  private:
    int _count;
    NodeInt *_pointerToTheTop;
};