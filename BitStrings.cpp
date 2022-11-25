#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int main(){
// int t; 
// cin >> t;
// for(int w = 0; w < t;w++){
long n;
cin >> n;
long long tot = 1;
long long div = 1000000000 + 7;
for(long y =0 ; y < n;y++){
tot *= 2;
tot = tot % (div);
}


cout << tot << "\n";






//}

return 0;
}