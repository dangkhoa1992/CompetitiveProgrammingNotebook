#define DEBUG
//#define LINUX

#ifdef LINUX
#include <bits/stdc++.h>
#endif

#ifndef LINUX
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <bitset>
#include <iostream>
#include <fstream>
#include <streambuf>
#include <istream>
#include <vector>
#include <list>
#include <forward_list>
#include <string>
#include <map>
#include <algorithm>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <set>
#include <iomanip>
#include <sstream>
#include <cmath>
#include <ctime>
#include <random>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <utility>
#include <climits>
#include <cassert>
#include <istream>
#include <random>
#include <iterator>
#include <memory>
#include <cctype>
#endif
using namespace std;

#define ll long long
#define ull unsigned long long
#define for_i(start,end,step) for(int i = start; i < (int)end; i += step) // [start, end)
#define for_id(start,end,step) for(int i = start; i > (int)end; i += step) // [start, end)
#define for_j(start,end,step) for(int j = start; j < (int)end; j += step) // [start, end)
#define for_jd(start,end,step) for(int j = start; j > (int)end; j += step) // [start, end)

//parameters
ll T;
/*-------------------------------------------------------------------*/
ll solve() {

	return 0;
}
/**************	 THINK SIMPLY ************************/
int main(int agrc, char *argv[]) {
	#ifdef DEBUG
	freopen("..\\Debug\\Input.txt", "r", stdin);
	freopen("..\\Debug\\Output.txt", "w", stdout);
	freopen("..\\Debug\\Cerr.txt", "w", stderr);
	//std::ios::sync_with_stdio(false);
	#endif
/*-------------------------------------------------------------------*/
	cin >> T;
	for (ull id = 1; id <= T; ++id) {
		//InOut
		
		//Clear parameter 

		//Solve
		cout << "Case #" << id << ": " << solve() << endl;
	}
	return 0;
}
