#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <climits>
#include <vector>
#include <map>
#include <list>
#include <deque>
#include <stack>
#include <set>
#include <string>
#include <cstring>
#include <algorithm>
#include <bitset>
#include <cmath>
#include <utility>
#include <functional>

using namespace std;

#define LL long long
#define PI acos(-1.0)
#define sf scanf
#define pf printf
#define nl printf("\n")
#define FOR(i,a,b) for( i=a; i<=b; i++)
#define FORM(i,a,b) for( i=b; i>=a; i--)
#define FORS(i,n) FOR(i, 0, n-1)
#define FORD(i,n) FORM(i, 0, n-1)
#define mp make_pair
#define open freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
#define close fclose(stdin); fclose(stdout)
#define db (double)

const int N = 1000010;

int gcd(int a, int b) { if(!b) return a; return gcd(b,a%b); }
int lcm(int a, int b) { return a*b / gcd(a,b); }

int main(void)
{
	int a[4], i;
	FORS(i,4) sf("%d", &a[i]);
	sort(a, a+4);
	int deg = 0, j, k;
	FOR(i,0,1)
		FOR(j,i+1,2)
			FOR(k,j+1,3)
				if(a[i] + a[j] > a[k]) {
					puts("TRIANGLE"); return 0;
				} else if(a[i] + a[j] == a[k]) 
					deg++;
	puts(deg? "SEGMENT" : "IMPOSSIBLE");
	return 0;
}