#include <bits/stdc++.h>
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <string>
#include<cstring>
using namespace std;
bool compare(string a,string b)
{
    if(a.size() == b.size())
      return a < b;
    else
      return a.size() < b.size();
    /*if(strlen(a) == strlen(&b))
      return a < b;
    else
      return strlen(&a) < strlen(&b);*/
}
int main()
{
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++)
    {
       cin >> unsorted[unsorted_i];
    }
    sort(unsorted.begin(),unsorted.end(),compare);
    for(auto const value : unsorted)
    {
        cout<<value<<endl;
    }

    
    // your code goes here
    return 0;
}
