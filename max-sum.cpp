#include<bits/stdc++.h>
using namespace std;
#define rec(a,i,n) for(int i=a;i<n;i++)
main()
{
int arr[]={-1,2,4,-3,5,2,-5,2};
int n=*(&arr+1)-arr;
int best=0;
for (int a = 0; a < n; a++) {
int sum = 0;
for (int b = a; b < n; b++) {
sum += arr[b];
best = min(best,sum);
}
}
cout<<"The min sum of the elements is "<<best;
return 0;
}
