#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int main(){
 //int t; 
 //cin >> t;
 //for(int w = 0; w < t;w++){
long n;
cin >> n;
if(n % 2 == 0){
if((n/2) % 2 == 0){
vector <long> v1;
vector <long> v2;
bool ok = true;
cout << "YES" << "\n";
for(int y = 0 ;y < n/2;y++){
if(ok){v1.push_back(y+1);v1.push_back(n-y);}
else{v2.push_back(y+1);v2.push_back(n-y);}
	ok = !ok;
}
cout << v1.size() << "\n";
for(int r = 0 ;r < v1.size();r++){
	cout << v1[r] << " ";
}
cout << "\n";
cout << v2.size() << "\n";
for(int r = 0 ;r < v2.size();r++){
	cout << v2[r] << " ";
}
return 0;
}
else{cout << "NO";return 0;}


}
else{             // odd value of n
long long g = n*(n+1)/2;
if(g % 2 != 0){cout << "NO" << "\n";return 0;}
else{
	cout << "YES" << "\n";
vector <long> v1;
vector <long> v2;
bool ok = true;
for(int y = 0; y < (n-1)/2;y++){
	if(y +1 == (n-1)/2){v1.push_back(n-y);v2.push_back(y+2);}
else if(ok){v1.push_back(y+2);v1.push_back(n-y);}
else{v2.push_back(y+2);v2.push_back(n-y);}
ok = !ok;
}
v2.push_back(1);
cout << v1.size() << "\n";
for(int r = 0 ;r < v1.size();r++){
	cout << v1[r] << " ";
}
cout << "\n";
cout << v2.size() << "\n";
for(int r = 0 ;r < v2.size();r++){
	cout << v2[r] << " ";
}



}



	return 0;}



//}

return 0;
}