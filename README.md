# About
Welcome to my approximation software using Euler's Method! This program approximates the initial value of the function using ```Euler's Method```

# How to use EulerApproximation
## 1. Change the value of these variables before executing the program.
```cpp
float y = ;            //inital value of y; change this line!!!!

float x = ;            //inital value of x; change this line!!!!            
float x0 = ;           //inital value of x; change this line!!!!            
float x1 = ;           //end value of x; change this line!!!!               

int h= ;            // number of steps; change this line!!!!             
```
When given quesion: ```∂p/∂x=0.5x(1−x), p(0)=2, Use Euler's method to approximate p(2), using a step size of 0.5``` 

in this problem 
```y= 2``` 
```x= 0``` 
```x0= 0``` 
```x1= 2```
since the end point of x is ```2```, step size ```0.5```, we can get number of steps is ```(2-0)/0.5=``` ```4```
as the result, ```h= 4```

## 2. Put in ```∂p/∂x``` 
```cpp
dydx = ;     //put your function right here 
```
From the previous question, ```∂p/∂x=0.5*x*(1−x)```
## Please don't forget to put in ```*``` when doing multiplication. Or the function will not execute!!!
