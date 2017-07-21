#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
void insertionSort(int _ar_size, int *  _ar) 
{ 
    int temp,_ar_j = 0,_ar_k = 0,num;
    //for(int _ar_i = 0; _ar_i < _ar_size; _ar_i++) 
    { 
        for(_ar_j = 1; _ar_j < _ar_size; _ar_j++) 
        { 
           num = _ar[_ar_j];
            for(_ar_k = _ar_j; _ar_k >= 0 ; _ar_k--) 
            { 
                if(num < _ar[_ar_k])
                {
                    //temp = _ar[_ar_j];
                    _ar[_ar_k+1] = _ar[_ar_k];
                    _ar[_ar_k] = num;
                    //_ar_j = _ar_k;
                }
            }
        for(int _ar_l = 0; _ar_l < _ar_size; _ar_l++) 
        { 
            cout << _ar[_ar_l]<<" ";
        //scanf("%d", &_ar[_ar_i]); 
        }
         cout<<endl;
        }
       
    }
    
   // for(int _ar_k = 0; _ar_k < _ar_size; _ar_k++) 
   // { 
   //     cout << _ar[_ar_k];
        //scanf("%d", &_ar[_ar_i]); 
   // }
   

}
int main(void) {
   
    int _ar_size;
    cin >> _ar_size;
    //scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) 
    { 
        cin >> _ar[_ar_i];
        //scanf("%d", &_ar[_ar_i]); 
    }

   insertionSort(_ar_size, _ar);
   
   return 0;
}
