#include <iostream>
using namespace std;

//prints Fibonacci Sequence
void fib_number(int num) {
  //fibonacci sequence starts qith 0 and 1
  int a=0, b=1, next_num;
  for(int i = 0; i < num; i++){
    if(i == 0) {
      cout << a << " " << b << " ";
    }
    else {
      // 0 + 1 = 1 (next_num)
      next_num = a + b;
      // moving to a next number a becomes b
      a = b;
      // and b becomes the next number
      b = next_num;
      cout << next_num << " ";
    }
  }
}

//takes user's input and checks if valid
void number_check() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  // n can't be a negative number
  if (n < 0) {
    cout << "Invalid input" << endl;
  }
  else if (n > 40) {
    cout << "The number exceeds size of the integer" << endl;
  }
  else {
  // passes the parameter value (n) to the fib_number function
    fib_number(n);
  }
}

int main() {
  number_check();
  return 0;
}





