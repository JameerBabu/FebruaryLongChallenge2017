https://www.codechef.com/FEB17/problems/CHEFAPAR


#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
 
int main () {
  int t,a,b,c,d,i,fine,e,f,g,h;
 
  cin >> t ;
  fine = 0;
   for (a =0; a< t; a++) {
     vector<int>v;
    cin >> b;
    fine = 0;
    for(c=0;c<b;c++) {
      cin >> d;
      v.push_back(d);
 
 
    }
 
g=0;
h=0;
 
for (i=0; i<v.size(); i++) {
 
 
   if (v[i] == 0) {
 
 
     if (v[i+1] == 1 ) {
        e = v[i];
        v[i] = v[i+1];
        v[i+1] = e ;
        g = g+1;
     }else {}
   }else {
 
   }
 
 
 
}
 
for (f=0; f <v.size();f++) {
  if (v[f] == 0) {
    h = h +1 ;
  }else {}
}
 
 fine = (g*100) + (h*1100);
 
 
    cout << fine << endl;
 
 
   }
 
 
return 0;
}
