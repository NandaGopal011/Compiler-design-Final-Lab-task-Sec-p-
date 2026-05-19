//....mid......1…….

#include <iostream>

using namespace std;

bool isNumeric(string s) {

    if (s.length() == 0) return false;

    for (int i = 0; i < s.length(); i++) {

        // '0'–'9' => ASCII 48–57

        if (!(s[i] >= 48 && s[i] <= 57)) {

            return false;

        }

    }

    return true;

}

int main() {

    string input;

    cout << "Enter input: ";

    cin >> input;

    if (isNumeric(input))

        cout << "Numeric Constant" << endl;

    else

        cout << "Not Numeric" << endl;

    return 0;

}


 /*


//....2....

#include <iostream>

using namespace std;

void checkOperator(string s) {

    bool found = false;

    for (int i = 0; i < s.length(); i++) {

        // + - * / % =

        if (s[i] == 43 || s[i] == 45 || s[i] == 42 ||

            s[i] == 47 || s[i] == 37 || s[i] == 61) {

            cout << "Operator found: " << s[i] << endl;

            found = true;

        }

    }

    if (!found)

        cout << "No Operator Found" << endl;

}

int main() {

    string input;

    cout << "Enter expression: ";

    cin >> input;

    checkOperator(input);

    return 0;

}
 */



 /*
//.......3……

#include <iostream>

using namespace std;

bool isComment(string s) {

    if (s.length() < 2) return false;

    // //  (47,47)

    if (s[0] == 47 && s[1] == 47)

        return true;

    // /*  (47,42)

    if (s[0] == 47 && s[1] == 42)

        return true;

    return false;

}

int main() {

    string input;

    cout << "Enter line: ";

    getline(cin, input);

    if (isComment(input))

        cout << "It is a Comment line" << endl;

    else

        cout << "Not a Comment" << endl;

    return 0;

}



*/



//.............4.........

/*

#include <iostream>

using namespace std;

bool isIdentifier(string s) {

    if (s.length() == 0) return false;



    if (!((s[0] >= 65 && s[0] <= 90) ||

          (s[0] >= 97 && s[0] <= 122) ||

          (s[0] == 95))) {

        return false;

    }



    for (int i = 1; i < s.length(); i++) {

        if (!((s[i] >= 65 && s[i] <= 90) ||

              (s[i] >= 97 && s[i] <= 122) ||

              (s[i] >= 48 && s[i] <= 57) ||

              (s[i] == 95))) {

            return false;

        }

    }

    return true;

}

int main() {

    string input;

    cout << "Enter identifier: ";

    cin >> input;

    if (isIdentifier(input))

        cout << "Valid Identifier" << endl;

    else

        cout << "Invalid Identifier" << endl;

    return 0;

}
