/*4.35 (Factorial) The factorial of a nonnegative integer n is written n! 
(pronounced “n factorial”) and is defined as follows: For example, , which is 120.
Use while statements in each of the following: 
C. Write a program that computes the value of
by using the formula
Prompt the user for the desired accuracy of e (i.e., the number of terms in the summation).
(c++ how to program)*/

#include<iostream>
#include<cmath>
using namespace std ;

int main(){

    unsigned int counter(1),n(1);
    double total(0);

    cout << "Enter number :";
    cin >> n ;

    while(counter <= n){
        
        if(counter == 1 ){
            total = 1+(counter/counter) ; 
        }
        else{
            total = total + (pow(counter,counter) / counter);
        }
        counter++;
    }
    cout << "Total = " << total << endl;
}