#include <iostream>
using namespace std;


int main() {
  int numero = 0;
  int i;
  cin >> numero;
  for(i=0; i<=numero; i++){
    if(i % 3 == 0 && i % 5 == 0){
      cout << "FizzBuzz" << endl;
    }else if(i % 3 == 0){
      cout << "Fizz" << endl;
    }else if(i % 5 == 0){
      cout << "Buzz" << endl;
    }else{
      cout << i << endl;
    }
  }
  cout << numero;
}