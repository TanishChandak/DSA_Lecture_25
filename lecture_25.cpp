#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << "num value is: " << num << endl;             // Simple print of the value
    cout << "Address of num value is: " << &num << endl; // here we found the address of the num, with the help of (&)
    // Creating pointer
    int *ptr = &num;
    cout << "The Address of ptr is: " << ptr << endl;          // it will give you the address of ptr
    cout << "The value store in the ptr is: " << *ptr << endl; // it will the value store in the num with the help of pointer and address

    cout << "Size of an integer is: " << sizeof(num) << endl; // size of an integer.
    cout << "Size of an pointer is: " << sizeof(ptr) << endl; // size of an pointer.

    // Creating an pointer which is type of double
    double d = 4.23;
    double *p2 = &d;

    cout << "The Address of p2 is: " << p2 << endl;
    cout << "The value which is present in d is: " << *p2 << endl;
    cout << "The size of double p2 is: " << sizeof(d) << endl;   // Size of an double.
    cout << "The size of pointer p2 is: " << sizeof(p2) << endl; // Size of an pointer.

    // int *p = 0;  // this is bad Pratice, do not try to use this type of pointer or create.
    int i = 6;
    int *q = &i;
    cout << "The address of q is: " << q << endl;                 // give the address of q
    cout << "The value which is present in i is: " << *q << endl; // give the value present in i

    // Creating an null pointer and store the value in it.
    int *p = 0;
    p = &i;
    cout << "The Address of p is: " << p << endl;                 // give the address of p
    cout << "The value which is present in i is: " << *p << endl; // give the value present in i

    // Incrementing the pointer value.
    cout << "Before, Printing the value of pointer " << *p << endl;
    (*p)++; // it will add the value to the pointer p.
    // *p = *p + ; // it will add the value to the pointer p.
    cout << "After, Printing the value of pointer " << *p << endl;

    // here we try to adding the variable which is stored the address of the pointer.
    cout << "Before, Printing the value of p " << p << endl;
    p = p + 1; // here we see the address goes to the next place it will goes 4byte above.
    cout << "After, Printing the value of p " << p << endl;

    // Copy the address of one pointer to the another new pointer.
    int *x = p;
    cout << "The address of both value original and copy is: " << p << "--" << x << endl;
    cout << "The value of both pointers original and copy is: " << *p << "--" << *x << endl;
}