#include<iostream>
#include<algorithm>
using namespace std;
int arr[1010];

main(){
	int n;
	cin >> n;
	int i;
	for(i=0; i<n; i++){
		cin >> arr[i];
	}
	sort(arr, arr+n);
	i = 0;
	while(arr[i] == 0){
		i++;
	}
	if(i != 0) {
		arr[0] = arr[i];
		arr[i] = 0;
	}
	
	for(i=0; i<n; i++){
		cout << arr[i];
	}
}
