// Recursive function that takes a number and return sum of all number from 0 to that number

#include<iostream>
using namespace std;

int sum(int n )
{
    if(n==0||n==1)
    {
     return n;
    }
    else
    {
     return(n+sum(n-1));
    }
}

int main()
{
  int N , S;
  cout<<"Enter integer to calculate sum from 0 to that number: ";
  cin>>N;
  S=sum(N);
  cout<<"Sum from 0 to given number is: "<<S;
  return 0;
  
}