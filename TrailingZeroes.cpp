#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int main(){
 //int t; 
 //cin >> t;
 //for(int w = 0; w < t;w++){
long n;
cin >> n;
long long g = 1;
int q = 12;
while(q){
	g *= 5;
	q--;
}
q = 12;
long long ans = 0;
while(q){
ans += (n / g);
g /= 5;
q--;
}
cout << ans << "\n";





//}

return 0;
}