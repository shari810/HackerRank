#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int str_len = s.length();
    bool am = false;
    bool pm = false;
    //cout << s.substr(str_len-2) << endl;
    if (s.substr(str_len-2) == "AM" ){
        am = true;
        //pm = false;
    } 
    else{
        //am = false;
        pm = true;
    }
    
    if(am == true){
        if(stoi(s.substr(0,2)) == 12){
            string hours = "00";
            return hours+s.substr(2,6);
        }
       return s.substr(0,str_len-2);
    }
    else{
        if(stoi(s.substr(0,2)) == 12){
            string hours = "12";
            return hours+s.substr(2,6);
        }
        int hours = stoi(s.substr(0,2));
        //cout << hours << endl;
        string min_sec = s.substr(2,6);
        //cout << min_sec << endl;
        int afternoon = hours+12;
        //cout << afternoon << endl;
        string new_hours = to_string(afternoon);
        //cout << new_hours << endl;
        return new_hours+min_sec;
    }
    
    
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
