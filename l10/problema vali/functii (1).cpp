#include "functii.h"

int nrUpper(string s) {
	int n = s.size();
	int nr = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			nr++;
		}
	}
	return nr;
}