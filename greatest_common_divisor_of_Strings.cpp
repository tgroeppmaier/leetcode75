#include <string>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

// Function to test if a string can be constructed by repeating a divisor
// bool testDivisor(const string& str, const string& divisor) {
// 	size_t strLen = str.length();
// 	size_t divisorLen = divisor.length();

// 	if (strLen % divisorLen != 0) {
// 		return false;
// 	}

// 	for (size_t i = 0; i < strLen; i += divisorLen) {
// 		if (str.substr(i, divisorLen) != divisor) {
// 			return false;
// 		}
// 	}

// 	return true;
// }

// // Function to find the greatest common divisor of two lengths
// // If a string can be constructed by repeating a substring, then any common divisor of the two strings must be a substring of length equal 
// // to the GCD of their lengths. This is because the GCD length is the largest length that can evenly divide both strings.

// int gcd(int a, int b) {
// 	while (b != 0) {
// 		int tmp = b;
// 		b = a % b;
// 		a = tmp;
// 	}
// 	return a;
// }



// // Function to find the greatest common divisor string
// string gcdOfStrings(const string& str1, const string& str2) {
// 	int len1 = str1.length();
// 	int len2 = str2.length();
	
// 	if (len1 == 0) return str2;
// 	if (len2 == 0) return str1;
// 	int gcdLen = gcd(len1, len2);

// 	string candidate = str1.substr(0, gcdLen);

// 	if (testDivisor(str1, candidate) && testDivisor(str2, candidate)) {
// 		return candidate;
// 	}

// 	return "";
// }

string gcdOfStrings(const string& str1, const string& str2) {
	// int gcdNum = gcd(str1.length(), str2.length());
	// string sub1 = str1.substr(0, gcdNum);
	// string sub2 = str2.substr(0, gcdNum);

	return (str1 + str2 == str2 + str1 ? str1.substr(0, gcd(str1.length(), str2.length())) : "");

}

// class Solution {
// public:
//     string gcdOfStrings(string str1, string str2) {
//         return (str1 + str2 == str2 + str1) ? 
//         str1.substr(0, gcd(size(str1),size(str2))): "";
//     }
// };

int main() {
	cout << gcdOfStrings("TAUXXTAUXXTAUXXTAUXXTAUXX", "TAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXX") << endl;
	cout << gcdOfStrings("abcabc", "abc") << endl;
	cout << gcdOfStrings("", "abcd") << endl;
	cout << gcdOfStrings("abc", "") << endl;
	return 0;
}

