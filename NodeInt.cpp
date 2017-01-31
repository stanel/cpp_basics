class NodeInt
{
  public:
    NodeInt(int value, NodeInt *pointerToTheNextNode)
    {
        _value = value;
        _pointerToTheNextNode = pointerToTheNextNode;
    }

    int getValue()
    {
        return _value;
    }

    NodeInt *getPointerToTheNextNode()
    {
        return _pointerToTheNextNode;
    }

  private:
    int _value;
    NodeInt *_pointerToTheNextNode;
};
