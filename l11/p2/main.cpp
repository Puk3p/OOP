#include "header.h"
#include <algorithm>
using namespace std;

int main()
{
	vector<StudentAC> v;
	StudentAC s1("Monica", 8);
	StudentAC s2("Ionut", 9);
	StudentAC s3("Rares", 6);
	v.push_back(s1);
	v.push_back(s2);
	v.push_back(s3);
	AfisareVector(v);

	sort(v.begin(), v.end());
	AfisareVector(v);

	return 0;
}