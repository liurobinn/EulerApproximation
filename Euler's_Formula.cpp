#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//==================================
//if you want pi, please type : M_PI
//==================================

//==============================================================================
float y = 1;            //inital value of y; change this line!!!!            ===
//                                                                           ===
float x = 1;            //inital value of x; change this line!!!!            ===
float x0 = 1;           //inital value of x; change this line!!!!            ===
//                                                                           ===
float x1 = 2;           //end value of x; change this line!!!!               ===
//                                                                           ===
int h= 1000;            // number of steps; change this line!!!!             ===
//==============================================================================
float dydx;
float dx;
float dy;

int i;

int main()
{
        while (i < h) {
                dx = (x1 - x0)/h;
//==============================================================================
                dydx = y/x;     //put your function right here               ===
//==============================================================================
                dy = dx * dydx;

                x = x + dx;
                y = y + dy;

                cout << "dx= " << dx << "   ";
                cout << "x= " << x << "   ";
                cout << "dy= " << dy << "   ";
                cout << "y= " << y << "   " << endl;
                i++;
        }

        cout << "f("<< x1; cout <<")=" << y;
        return 0;
}
