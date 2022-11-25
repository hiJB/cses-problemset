#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
 
int main(){
// int t; 
// cin >> t;
// for(int w = 0; w < t;w++){
long n;
cin >> n;
long arr[n];
for(int y = 0; y < n;y++){
	cin >> arr[y];
}
sort(arr,arr+n);
long tot = 1;
for(int y = 1;y < n;y++){
	if(arr[y] != arr[y-1]){tot++;}
}
cout << tot << "\n";











 
 
//}
 
return 0;
}
