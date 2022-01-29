#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//=====================================
//if you want pi, please type : M_PI
//=====================================
//if you want e, please type : (2.7182)
//=====================================

//==============================================================================
float y= 1;            //inital value of y; change this line!!!!             ===
//                                                                           ===
float x= 1;            //inital value of x; change this line!!!!             ===
float x0= 1;           //inital value of x; change this line!!!!             ===
//                                                                           ===
float x1= 2;           //end value of x; change this line!!!!                ===
//                                                                           ===
float dx= 0.25;        //put in step size; change this line!!!!              ===
//==============================================================================
int h= (x1 - x0)/dx;
float dydx;

float dy;

int i=1;

int main()
{
        while (i <= h) {
//==============================================================================
                dydx= y/x;     //put your function right here                ===
//==============================================================================
                dy= dx * dydx;

                x+= dx;
                y+= dy;
                cout << "loop" << i << "\t";
                cout << "dx= " << dx << "\t";
                cout << "x= " << x << "\t";
                cout << "dy= " << dy << "\t";
                cout << "y= " << y << "\t" << endl;
                i++;
        }

        cout << "f("<< x1; cout <<")=" << y;
        return 0;
}
