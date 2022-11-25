#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int main(){
 int t; 
 cin >> t;
 for(int w = 0; w < t;w++){
long a,b;
cin >> a >> b;
long maxx,minn;
maxx = max(a,b);
minn = min(a,b);
if( (a+b)  % 3 == 0 and maxx <= 2*minn){cout << "YES" << "\n";}
else{cout << "NO" << '\n';}








}

return 0;
}