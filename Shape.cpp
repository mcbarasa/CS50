#include <iostream>

using namespace std;

class Shape{
    public:
    float length;
    float width;
    public:
    void set_values(float a, float b){
    length = a;
    width = b;
    }
    virtual float Area()
    {
        return 0;

    }

};
class Rectangle:
  public Shape{
      public:
      float Area()
      {
          return (width * length);
      }
  };
class Triangle:
    public Shape{
       public:
       float Area()
       {
           return ((width * length/2));
       }
   };
class Square:
    public Shape{
       public:
       float Area()
       {
           return (length * length );
       }
    };

int main()
{
Rectangle rect;
Triangle tri;
Square sqr;
rect.set_values (4, 5);
tri.set_values (4, 5);
sqr.set_values (4, 4);
cout << rect.Area() << '\n';
cout << tri.Area() << '\n';
cout << sqr.Area() << '\n';
return 0;
}
