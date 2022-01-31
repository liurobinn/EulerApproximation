/*
MIT License

Copyright (c) 2022 Cheng Liu

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

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
float y= 1;            //inital value of y; change this line!!!!
//
float x= 1;            //inital value of x; change this line!!!!
float x0= 1;           //inital value of x; change this line!!!!
//
float x1= 2;           //end value of x; change this line!!!!
//
int h= 1000;            // number of steps; change this line!!!!
//==============================================================================
float dydx;
float dx;
float dy;

int i= 1;

int main()
{
        while (i <= h) {
                dx= (x1 - x0)/h;
//==============================================================================
                dydx= y/x;     //put your function right here               
//==============================================================================
                dy= dx * dydx;

                x+= dx;
                y+= dy;

                cout << "loop " << i << "\t";
                cout << "dx= " << dx << "\t";
                cout << "x= " << x << "\t";
                cout << "dy= " << dy << "\t";
                cout << "y= " << y << "\t" << endl;
                i++;
        }

        cout << "f("<< x1; cout <<")=" << y;
        return 0;
}
