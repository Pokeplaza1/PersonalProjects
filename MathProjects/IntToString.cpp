#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> numMap;
    numMap[1] = "One";
    numMap[2] = "Two";
    numMap[3] = "Three";
    numMap[4] = "Four";
    numMap[5] = "Five";
    numMap[6] = "Six";
    numMap[7] = "Seven";
    numMap[8] = "Eight";
    numMap[9] = "Nine";
    numMap[10] = "Ten";
    numMap[11] = "Eleven";
    numMap[12] = "Twelve";
    numMap[13] = "Thirteen";
    numMap[14] = "Fourteen";
    numMap[15] = "Fifteen";
    numMap[16] = "Sixteen";
    numMap[17] = "Seventeen";
    numMap[18] = "Eighteen";
    numMap[19] = "Nineteen";
    numMap[20] = "Twenty";
    numMap[30] = "Thirty";
    numMap[40] = "Forty";
    numMap[50] = "Fifty";
    numMap[60] = "Sixty";
    numMap[70] = "Seventy";
    numMap[80] = "Eighty";
    numMap[90] = "Ninety";
    numMap[100] = "Hundred";
    numMap[1000] = "Thousand";
    numMap[10000] = "Ten Thousand";
    numMap[100000] = "Hundred Thousand";
    numMap[1000000] = "Million";
    numMap[10000000] = "Ten Million";
    numMap[100000000] = "Hundred Million";
    numMap[1000000000] = "Billion";
    string num_string;
    int number;
    string result = "";
    cout << "Enter a number (1-999999): ";
    cin >> num_string;
    if (num_string.size() < 10) {
        number = stoi(num_string);
    } else {
        cout << "Number out of range!" << endl;
        return 1;
    }
    if (number < 1 || number > 999999999) {
        
        cout << "Number out of range!" << endl;
        return 1;
    }
    if (number == 0) {
        cout << "In words: Zero" << endl;
        return 0;
    }
    if (number < 0) {
        result += "Negative ";
        number = -number;
    }
    //Billions
    if (number >= 1000000000) {
        result += numMap[number / 1000000000] + " " + numMap[1000000000] + " ";
        number %= 1000000000;
    }
    //Hundred Millions
    if (number >= 100000000) {
        result += numMap[number / 100000000] + " " + numMap[100] + " ";
        number %= 100000000;
    }
    //Ten Millions
    if (number >= 10000000) {
        result += numMap[number / 10000000 * 10] + " ";
        number %= 10000000;
    }
    //Millions
    if (number >= 1000000) {
        result += numMap[number / 1000000] + " " + numMap[1000000] + " ";
        number %= 1000000;
    }
    //Hundred Thousands
    if (number >= 100000) {
        result += numMap[number / 100000] + " " + numMap[100] + " ";
        number %= 100000;
    }
    //Ten Thousands
    if (number >= 10000) {
        result += numMap[number / 10000 * 10] + " ";
        number %= 10000;
    }
    //Thousands
    if (number >= 1000) {
        result += numMap[number / 1000] + " " + numMap[1000] + " ";
        number %= 1000;
    }
    //Hundreds
    if (number >= 100) {
        result += numMap[number / 100] + " " + numMap[100] + " ";
        number %= 100; 
    }
    //Tens and Units
    if (number >= 20) {
        result += numMap[(number / 10) * 10] + " ";
        number %= 10;
    }
    if (number > 0) {
        result += numMap[number] + " ";
    }
    cout << "In words: " << result << endl;
    return 0;
}