Даны длины сторон треугольника. Вычислите площадь треугольника.

Формат входных данных
Вводятся три положительных числа.
Формат выходных данных
Выведите ответ на задачу.

Sample Input:

3
4
5

Sample Output:

6

#include <iostream>
#include <math.h>
using namespace std;


int main() {
  // put your code here
    //S = sqrt(p*(p-a)*(p-b)*(p-c)), где sqrt - это корень, а p = (a + b + c) / 2.
  //int a,b,c;
  double a,b,c,p,s;
  cin>>a;
  cin>>b;
  cin>>c;
  p = (a+b+c)/2.0;
  s = sqrt(p*(p-a)*(p-b)*(p-c));
  cout<<s;
  return 0;
}
