#include <iostream>



bool isValidRegex(const char* str) {



    if (str[0] == '\0') return false;

    int i = 0;



    while (str[i] != '\0') {


        while (str[i] == 'a') {

            i++;

        }



        if (str[i] != 'b') {

            return false;

        }



        while (str[i] == 'b') {

            i++;

        }



    }


    return true;

}

int main() {



    const char* testCases[5] = {

        "ab",       // Case 1: Expected Accepted

        "aaabb",    // Case 2: Expected Accepted

        "bbab",     // Case 3: Expected Accepted (b followed by ab)

        "a",        // Case 4: Expected Rejected (No 'b' to close it)

        "aba"       // Case 5: Expected Rejected (Ends with 'a')

    };

    std::cout << "--- Regex [a*(b+) + ab]+ Validation --- \n\n";

    for (int i = 0; i < 5; i++) {

        std::cout << "Test Case " << i + 1 << ": \"" << testCases[i] << "\" -> ";

        if (isValidRegex(testCases[i])) {

            std::cout << "ACCEPTED\n";

        } else {

            std::cout << "REJECTED\n";

        }

    }

    return 0;

}
