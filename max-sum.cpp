#include<bits/stdc++.h>
using namespace std;
#define rec(a,i,n) for(int i=a;i<n;i++)
main()
{
int arr[]={-2,-3,-4,0,1,2,3,4};
int n=*(&arr+1)-arr;
int best=0;
for (int a = 0; a < n; a++) {
int sum = 0;
for (int b = a; b < n; b++) {
sum += arr[b];
best = min(best,sum);
}
}
cout<<"The minimum sum of the elements is "<<best;
return 0;
}
