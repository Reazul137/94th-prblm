#include<iostream>
using namespace std;
int main()
{
    double radius;

    cout << "Enter a radius : ";
    cin >> radius;

    double area = radius * radius * 3.1416;

    cout <<"The area is "<<area<<endl;

    return 0;
}
