#include  <iostream>
using namespace std;

int SecLarge(int a[], int n)
{
	for(int j = 0; j <= n;j++){
		if(a[0] < a[j]){
			int top = a[0] = a[j];
		}
	}
   int seclarg = 0;
   for (int i = n - 2; i >= 0; i--)
   {
      if (a[i] != a[n - 1])
      {
         seclarg = a[i];
         break;
      }
   }

   return seclarg;
}

int main()
{
   int a[] = {10,23,8,27,9,25,22,27};
   int n = sizeof(a) / sizeof(a[0]);

   int answer = SecLarge(a, n);

   cout << "sec large =: " << answer;

   return 0;
}

