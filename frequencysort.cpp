#include <bits/stdc++.h>
using namespace std;

bool custsort(pair<int,int>&a,pair<int,int>&b)
{
    if(a.first==b.first)
        return a.second < b.second;
    return a.first > b.first;
}


int main() {
	int arr[] = { 2, 3, 2, 4, 4, 5, 1, 5, 12, 2, 3, 3, 3, 12 };
	int n=sizeof(arr)/sizeof(arr[0]);
	int* maxi=max_element(arr,arr+n);
	int mx= *maxi;
	int a[mx+1]={0};
	vector<pair<int,int> >v;
	for(int i=0; i<n; i++){
	    a[arr[i]]++;
	}

	for(int i=0; i<mx+1; i++){
	    if(a[i]!=0) v.push_back({a[i],i});
	}
	sort(v.begin(),v.end(),custsort);
	int t=0;
	/*vector<pair<int,int> >::iterator it;
	for(it=v.begin(); it!=v.end(); it++){
	    int cnt = (*it).first;
	    int e=(*it).second;
	    while(cnt--){
	        a[t++]=e;
	    }
	}*/
	for(auto i: v){
	    int cnt=i.first;
	    int e=i.second;
	    while(cnt--){
	        a[t++]=e;
	    }
	}
	for (int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
