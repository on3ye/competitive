#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string format(int hour) {
    string s = to_string(hour);
    if (s.size() == 1) s = "0" + s;
    return s;
}

string timeConversion(string s) {
    string end = s.substr(8, 10);
    string str_hour = s.substr(0, 2);

    int int_hour = stoi(str_hour);
    int result_hour;
    
    if (end == "AM") {
        if (int_hour == 12) result_hour = 0;
        else result_hour = int_hour;
    } else {
        if (int_hour == 12) result_hour = 12;
        else result_hour = int_hour + 12;
    }

    return format(result_hour) + s.substr(2, 6);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
