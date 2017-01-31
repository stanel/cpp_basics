class Rectangle
{
    int _width;
    int _height;

  public:
    Rectangle(int width, int height)
    {
        _width = width;
        _height = height;
    }

    int ComputeArea()
    {
        return _width * _height;
    }
};
