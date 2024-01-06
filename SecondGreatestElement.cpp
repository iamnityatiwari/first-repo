#include<iostream>
using namespace std;
int print2largest(int a[], int n) {
	  int l=a[0];
	  int s=-1;
	  for(int i=1;i<n;i++)
	  {
	      if(a[i]>l)
	      {
	          s=l;
	          l=a[i];
	      }
	      else if(a[i]<l && a[i]>s)
	      {
	          s=a[i];
	      }
	      
	  }
	  return s;
}

    int main()
    {
        int arr[5]={4,5,6,3,2};
		cout<<print2largest(arr,5);
    }