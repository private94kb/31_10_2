#include <iostream> 

#include <cstdlib> 

#include <algorithm> 

using namespace std; 


  int main(void) { 

  const int lenght = 12; 

  int m[lenght]; 

    for (int  i = 0; i < lenght; i++) 

  { 

  m[i] = int(rand() % 100) + -(rand() % 100); 

  } 

    cout << "Random array:\n";//Массив [-100; 100]

    for (int i = 0; i < lenght; i++) 
  { 

    cout << m[i] << " "; 

  } 

    for (int i = 0; i < lenght; i++) 
  { 

    if (m[i] < 0)  
  { 

    m[i] = 0; 

    } 

  } 

  cout << "\n Array after transformation: \n";// Від'ємні числа перетворюютья на 0
    for (int i = 0; i < lenght; i++) 
  { 

  cout << m[i] << " "; 

  } 

return 0; 

} 