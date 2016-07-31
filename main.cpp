#include <iostream>
#include <vector>
#include <regex>

using namespace std;

double square(double x)
{
	return x*x;
}

void print_square(double x)
{
	cout << "The square of " << x << " is " << square(x) << endl;
}

void playWithPrecision()
{
	double d = 2.2;
	int i{ 17 };

	cout << "Var d is " << d << " and var i is " << i << endl;
	double dSum = d + i;
	int iSum = d + i;
	cout << "Sum in d form is " << dSum << " and in i form is " << iSum << endl;
}

void dumpVector(vector<int> theVector)
{
	cout << "Vector is {";
	for (auto x : theVector)
		cout << x << " ";
	cout << "}" << endl;
}

void playWithVectors()
{
	int sumV = 0;
	vector<int>::iterator it;

	vector<int> v{ 3,5,1,9,7 };

	for (it = v.begin(); it != v.end(); ++it)
		sumV += *it;

	dumpVector(v);
	cout << "The sum of vector is " << sumV << endl;

	sort(v.begin(), v.end());
	dumpVector(v);
}

void checkZipCode(regex thePat, string theZip) {
    if (regex_match(theZip, thePat))
        cout << "Zip code " << theZip << " checks out." << endl;
    else
        cout << "Zip code " << theZip << " not cool." << endl;
}

void playWithRegEx() {
    regex thePattern{R"(\d{5}(-\d{4})?)"};     // base pattern for zipcode of NNNNN-NNNN
    checkZipCode(thePattern, "10577");
    checkZipCode(thePattern, "10577-0000");
    checkZipCode(thePattern, "10577-OOOO");
    checkZipCode(thePattern, "1057");
}

int main()
{
	cout << "Hello, World" << endl;
	print_square(17);
	playWithPrecision();
	playWithVectors();
    playWithRegEx();

    return 0;
}
