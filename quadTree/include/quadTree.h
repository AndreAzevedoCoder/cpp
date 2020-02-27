class object
{
    public:
        int x,y,width,height;
        object(int _x, int _y, int _width, int _height)
        {
            x = _x;
            y = _y;
            width = _width;
            height = _height;
        }
};

class quadTree
{
    public:
        int x,y,width,height;
        object objects[4];

        quadTree(int _x, int _y, int _width, int _height)
        {
            x = _x;
            y = _y;
            width = _width;
            height = _height;
        }


};

