#include <iostream>
#include <math.h>

using namespace std;

int pointState(int cx, int cy, int cr, int x, int y) {
  int result = 0;
  
  if(pow(x - cx, 2) + pow(y - cy, 2) == pow(cr, 2)) result = 2;
  if(pow(x - cx, 2) + pow(y - cy, 2) < pow(cr, 2)) result = 1;
  
  return result;
}

int quadrilateralState(int cx, int cy, int cr, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
  int result = 0;
  int p1 = pointState(cx, cy, cr, x1, y1);
  int p2 = pointState(cx, cy, cr, x2, y2);
  int p3 = pointState(cx, cy, cr, x3, y3);
  int p4 = pointState(cx, cy, cr, x4, y4);
  
  if(p1 == 2 && p2 == 2 && p3 == 2 && p4 == 2) return result = 2;
  if(p1 && p2 && p3 && p4) return result = 1;
  
  return result;
}

int main() {
  int cx = 0;
  int cy = 0;
  int cr = 0;
  
  int x1 = 0;
  int y1 = 0;
  int x2 = 0;
  int y2 = 0;
  int x3 = 0;
  int y3 = 0;
  int x4 = 0;
  int y4 = 0;
  
  cout << "Enter circle center coordinates: " << endl;
  
  cout << "Enter x: ";
  cin >> cx;
  
  cout << "Enter y: ";
  cin >> cy;
  
  cout << "Enter radius: ";
  cin >> cr;
  
  cout << endl;
  
  cout << "Enter quadrilateral vertex coordinates: " << endl;
  
  cout << "Enter x1: ";
  cin >> x1;
  
  cout << "Enter y1: ";
  cin >> y1;
  
  cout << "Enter x2: ";
  cin >> x2;
  
  cout << "Enter y2: ";
  cin >> y2;
  
  cout << "Enter x3: ";
  cin >> x3;
  
  cout << "Enter y3: ";
  cin >> y3;
  
  cout << "Enter x4: ";
  cin >> x4;
  
  cout << "Enter y4: ";
  cin >> y4;
  
  cout << endl;
  
  int result = quadrilateralState(cx, cy, cr, x1, y1, x2, y2, x3, y3, x4, y4);
  
  switch (result) {
    case 0:
      cout << "Result: OUTSIDE" << endl;
    case 1:
      cout << "Result: INSIDE" << endl;
    case 2:
      cout << "Result: TOUCH" << endl;
  }
  
  return 0;
}
