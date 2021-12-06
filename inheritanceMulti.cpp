#include <iostream>
using namespace std;
// Base class Shape
class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      void setLength(int l) {
         length = l;
        }
      
   protected:
      int width;
      int height;
      int length;
};
// Base class PaintCost
class PaintCost {
   public:
      int getCost(int area) {
         return area * 70;
      }
};//need to set two more base classes, then pass all base classes to another class to calculate the surfacce area and volume
class Surface: public Shape {
    public: 
      int getSurface() {
         return (6 * (length * length)
      }
};
class Volume: public Shape{
    public:
      int getVolume() {
         return (length * length * length)
      }
};
Class Cube: public Shape, public Surface, class Volume {

};
// Derived class
class Rectangle: public Shape, public PaintCost {
   public:
      int getArea() {
         return (width * height); 
      }
};
int main(void) {
   Rectangle Rect;
   int area;
 
   Rect.setWidth(5);
   Rect.setHeight(7);
   area = Rect.getArea();
   
   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;
   // Print the total cost of painting
   cout << "Total paint cost: $" << Rect.getCost(area) << endl;
   return 0;
}