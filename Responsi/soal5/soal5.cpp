#include <bits/stdc++.h>
using namespace std;
int countTestCase = 0;

bool checkPalindrome(char* originalWord){
	char reversedWord[10001];
	int i = strlen(originalWord) - 1;
	int reverseCount = 0;
	for(int originalCount = i; originalCount >= 0; originalCount--){
		reversedWord[reverseCount] = originalWord[originalCount];
		reverseCount++;
	}
	if (strcmp(reversedWord, originalWord) == 0) {
        return true;
    } else {
        return false;
    }
}

void testCase1(){
	char originalWord[10001] = "level";
	bool expectedOutput = true;
	bool generatedOutput = checkPalindrome(originalWord);
	if(expectedOutput == generatedOutput){
        countTestCase++;
		cout << "Test code 1 Passed\n";
	} else {
        cout << "Test code 1 failed\n";
    }
}

void testCase2(){
	char originalWord[10001] = "Malam";
	bool expectedOutput = false;
	bool generatedOutput = checkPalindrome(originalWord);
	if(expectedOutput == generatedOutput){
        countTestCase++;
		cout << "Test code 2 Passed\n";
	} else {
        cout << "Test code 2 failed\n";
    }
}

void testCase3(){
	char originalWord[10001] = "RAVIFIVAR";
	bool expectedOutput = true;
	bool generatedOutput = checkPalindrome(originalWord);
	if(expectedOutput == generatedOutput){
        countTestCase++;
		cout << "Test code 3 Passed\n";
	}  else {
        cout << "Test code 3 failed\n";
    }
}

int main(){
	testCase1();
    testCase2();
    testCase3();

    if(countTestCase == 3){
        cout << "All of the test case is passed, program successfully run!";
        return 0;
    } else {
        cout << "Test case failed, program not succeeded!";
    }
}