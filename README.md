# About
Welcome to my approximation software using Euler's Method! This program approximates the initial value of the function using ```Euler's Method of Approximation```

Please choose between ```Euler's_Formula_Step_Count``` and ```Euler's_Formula_Step_Size``` Based on given problem.

# How to use EulerApproximation:
## I. Euler's_Formula_Step_Count
###   1. Change the value of these variables before executing the program.
```cpp
float y= ;            //inital value of y; change this line!!!!

float x= ;            //inital value of x; change this line!!!!            
float x0= ;           //inital value of x; change this line!!!!            
float x1= ;           //end value of x; change this line!!!!               

int h= ;              // number of steps; change this line!!!!             
```
When given quesion: ```∂y/∂x=0.5x(1−x), p(0)=2, Use Euler's method to approximate p(2), using 4 steps``` 

in this problem 
```y= 2``` 
```x= 0``` 
```x0= 0``` 
```x1= 2```
```h= 4```

### 2. Put in ```∂y/∂x``` 
```cpp
dydx= ;     //put your function right here 
```
According the previous question, ```∂p/∂x=0.5*x*(1−x)```
## II. Euler's_Formula_Step_Size
###   1. Change the value of these variables before executing the program.
```cpp
float y= ;            //inital value of y; change this line!!!!     

float x= ;            //inital value of x; change this line!!!!             
float x0= ;           //inital value of x; change this line!!!!             
float x1= ;           //end value of x; change this line!!!!                
                                                                      
float dx= ;        //put in step size; change this line!!!!                       
```
When given quesion: ```∂y/∂x=0.5x(1−x), p(0)=2, Use Euler's method to approximate p(2), using a step size of 0.5``` 

in this problem 
```y= 2``` 
```x= 0``` 
```x0= 0``` 
```x1= 2```
```dx= 0.5```

### 2. Put in ```∂y/∂x``` 
```cpp
dydx= ;     //put your function right here 
```
According the previous question, ```∂y/∂x=0.5*x*(1−x)```
# Note
Please don't forget to put in ```*``` when doing multiplication, ```^```when putting in exponents, ```/```when doing division. Or the program will not execute!!!
# Attention
```EulerApproximation``` is **not** certified for use in safety-critical applications. It should **not** be used in any life risking circumstances.
