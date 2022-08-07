//This is a program to list and give the average of numbers below the given positive number.
// STUDENT ID : 10984932

#include <iostream> 
 
using namespace std; 
 
void AverageOfPrimeNum(){ 
    int Num; 
    int SumOfPrimeNum = 0; 
    float NumOfPrimeNum = 0; 
    float AverageOfPrimeNum; 
    cout << "Enter your number : "; 
    cin >> Num; 
    cout << "\nThe prime numbers below " << Num << " are listed below.\n\n"; 
    for (int i = 2; i < Num; i++ ){ 
        int That = 0; 
        for (int a = 2; a <= i/2; a++){ 
            if (i%a == 0){ 
                That = 1; break; 
            } 
        } 
        if (That == 0){ 
            cout << i << endl; 
            SumOfPrimeNum += i; 
            NumOfPrimeNum += 1; 
        } 
    } 
    AverageOfPrimeNum = SumOfPrimeNum / NumOfPrimeNum; 
    cout << "\nThe sum of the prime numbers is : " << SumOfPrimeNum << endl << endl; 
    cout << "The number of the prime numbers shown is : " << NumOfPrimeNum << endl << endl; 
    cout << "The average of the prime numbers is : " << AverageOfPrimeNum << endl; 
} 
 
int main() 
{ 
    AverageOfPrimeNum(); 
    return 0; 
}

//I pledge that I did the work by my self. My Student ID is 10984932 
