// Count_Number_Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 123 = 1 2 3 && 123 = 1+2+3;
#include <iostream>
//#define county 30;

using namespace std;

//int countDigit(long long n)
//{
    //int count = 0;
   // while (n != 0) {
    //    n = n / 10;
   //     ++count;
  //  }
   // return count;
//}

int main() {
    long long n;
    cout << "Introduceti numarul: ";
    cin >> n;
    int sum = 0, m;
    int count = 0;
    while (n != 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
        ++count;
    }
    cout << "Sum of digits is = " << sum << endl;
    //long long n = 345289467;
    cout << "Number of digits : " << count << endl;
      //  << countDigit(n);
    
    return 0;
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
