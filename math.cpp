#include <iostream>
#include <cmath> // for functions such as sqrt (square root )
//round (rounds a number)and log (natural logarithm)
//can be found in the <cmath> header file:
#include <math.h>
using namespace std;

int main ()
{
//max and min 
//the max(x,y)function can be used to find the highest value of x and y:

cout << max (9 ,1001);
cout << "\n ";
//this means that max has predefined int since i did not include int in the variables
//but also here is a simple format of the same for begginers like me
int y=5;
int x=2000;
cout << "The max number is :\n";
cout << max ( y, x );
cout << endl<< endl<< endl ;
cout << min (109,392)<<endl << endl;

//though am not a begginer lemme do it for future ref

cout << sqrt (200);
cout <<endl <<endl;
cout << round (3.6);

cout << endl <<endl;

cout << log (2);

cout << endl << endl;




    return 0;
}
