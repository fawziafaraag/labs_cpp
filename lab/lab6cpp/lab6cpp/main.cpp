#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
class Point{
     int x, y;
public:
     Point(){x = y = 0;}
     Point(int m) {x = y = m;}
     Point(int m, int n){x = m ; y = n;}
     void SetX(int m){x = m;}
     void SetY(int n){y = n;}
     int GetX(){return x;}
     int GetY(){return y;}
     };

class Circle{
   Point pa, pb;
   float radius;
public:
    Circle(int x1, int y1, int x2, int y2):pa(x1, y1), pb(x2, y2){
      float x=abs(x1-x2);
      float y=abs(y1-y2);
      float squre_x=pow(x,2);
      float squre_y=pow(y,2);
      float squre_radius=squre_x+squre_y;  //r2= (x1-x2)^2+(y1-y2)^2
      radius = sqrt(squre_radius);
    }
    void SetPa(int x1, int y1){
        pa.SetX(x1);
        pa.SetY(y1);}
    void SetPb(int x2, int y2){
        pb.SetX(x2);
        pb.SetY(y2);}
    float Radius()
    {
        return radius;
    }


};


int main()
{
Circle C(2,2,8,8);

cout<<"Radius:: "<<C.Radius();


}
