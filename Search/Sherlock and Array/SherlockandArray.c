#include <bits/stdc++.h>

using namespace std;

string solve(vector < int > a)
{
    // Complete this function
    int i,j,k,lsum=0,rsum=0,flag = 0;
    for(i = 1;i < (a.size() - 1) ; i++)
    {
        for(j = i-1; j >= 0;j--)
        {
            lsum+=a[j];
        }
        for(k = i+1; k < a.size(); k++)
        {
            rsum+=a[k];
        }
        //cout<<rsum<<" "<<lsum<<endl;
        if(rsum == lsum)
            return "YES";
        rsum = 0;
        lsum = 0;
    }
    return "NO";
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = solve(a);
        cout << result << endl;
    }
    return 0;
}
