https://www.codechef.com/FEB17/problems/MAKETRI

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
 
int main () {
 
    vector<int>v;
 
        int n,l,r,a;
        cin >> n >> l >> r ;
        for (int j=0; j<n; j++) {
        cin >> a ;
             v.push_back(a);
 
        }
 
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int count = 0;
          int t =0 ;
 
          for (int q= l; q<=r; q++ ) {
 
            for (int j=0; j< v.size()-1;j++) {
 
              int b = v[j]+v[j+1];
              int c = v[j]-v[j+1];
 
                  if (b > q && c < q ) {
 
                    count = count + 1;
                    break;
                  /*  cout << q ;*/
 
 
 
 
                }else{}
 
 
          }
}
 
     cout << count << endl;
 
return 0;
}
