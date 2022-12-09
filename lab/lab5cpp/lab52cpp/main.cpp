#include <iostream>
#include <cstdlib>
using namespace std;

class Point{
    int x, y;
public:Point(){x = y = 0;}
     Point(int m) {x = y = m;}
     Point(int m, int n){x = m ; y = n;}
     void SetX(int m){x = m;}
     void SetY(int n){y = n;}
     int GetX(){return x;}
     int GetY(){return y;}
     };
class Rectangle_C{
         Point pa, pb;int length, width;
public:
    Rectangle_C(int x1, int y1, int x2, int y2):pa(x1, y1), pb(x2, y2){
    length = abs(x1 - x2);
    width = abs (y1 - y2);}
    void SetPa(int x, int y){
        pa.SetX(x);
        pa.SetY(y);
        length = abs(x - pb.GetX());
        width = abs(y - pb.GetY());
        }
        int Area(){return (length * width);}
        };
int main()
{
    /*
Write a class  point.
Write a class Rectangle that HAS 2 points.
Write a member function in the Rectangle that gets its area.
*/

    Rectangle_C rect(2,2,9,9);
   cout<<"Area: "<<rect.Area();
    return 0;
}
