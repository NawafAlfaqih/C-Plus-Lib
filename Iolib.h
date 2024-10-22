#pragma once

#include <iostream>
#include <string>
#include "mathlib.h"

using namespace std;

namespace read {

    int readNumber(string massege = "") {
        
        int num = 0;

        cout << massege;
        cin >> num;

        while (cin.fail()) {

            // user didn't input a number    
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            cout << massege;
            cin >> num;
        }

        return num;
    }
    
    int readPositiveNumber(string massege = "") {

        int num = 0;

        do {
            cout << massege;
            cin >> num;

            while (cin.fail())     {
                
                // user didn't input a number    
                cin.clear();      
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

                cout << massege;
                cin >> num;
            }

        } while (num < 0);

        return num;
    }

    int readNumberInRange(int from, int to, string massege = "") {

        int num = 0;

        do {
            cout << massege;
            cin >> num;

            while (cin.fail()) {

                // user didn't input a number    
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                cout << massege;
                cin >> num;
            }

        } while (num >= from && num <= to);

        return num;
    }

    string readString(string massege = "") {

        string str = "";
        cout << massege;
        cin >> str;
        return str;
    }
}

namespace pattren {

    int reverseNumber(int num) {

        int remainder = 0, reversedNum = 0;

        while (num > 0) {
            remainder = num % 10; //store leftmost digit
            num /= 10; //remove leftmost digit

            reversedNum *= 10;
            reversedNum = (reversedNum + remainder);
        }
        return reversedNum;
    }

    int digitFrequency(int digit, int num) {

        int remainder = 0, frequancy = 0;

        while (num > 0) {
            remainder = num % 10;
            num /= 10;

            if (remainder == digit)
                frequancy++;
        }
        return frequancy;
    }

    void DigitsInOrder(int num) {

        while (num > 0) {
            int remainder = 0;

            remainder = num % 10; //store leftmost digit
            num /= 10; //remove leftmost digit
            cout << remainder << endl;
        }
    }

    void DigitsInReversedOrder(int num) {

        while (num > 0) {
            int remainder = 0;

            remainder = num % 10; //store leftmost digit
            num /= 10; //remove leftmost digit
            cout << remainder << endl;
        }
    }

    void RowOfNumberPattren(int num) {

        for (int i = 1; i <= num; i++)
            cout << num;
    }

    void NumberPattren(int num) {

        for (int i = 1; i <= num; i++) {
            RowOfNumberPattren(i);
            cout << endl;
        }
    }

    void InvertedNumberPattren(int num) {

        for (int i = num; i >= 1; i--) {
            RowOfNumberPattren(i);
            cout << endl;
        }
    }

    void RowOfLetterPattren(int num) {

        for (int i = 1; i <= num; i++)
            cout << char(num + 64);
    }

    void LetterPattren(int num) {

        cout << endl;
        for (int i = 1; i <= num; i++) {
            RowOfLetterPattren(i);
            cout << endl;
        }
    }

    void InvertedLetterPattren(int num) {

        cout << endl;
        for (int i = num; i >= 1; i--) {
            RowOfLetterPattren(i);
            cout << endl;
        }
    }

    string randomStringOfCharactersGenerator(int numCharacters) {
        string charGroup = "";
        for (int i = 1; i <= numCharacters; i++)
            charGroup += mathlib::randomNumber(65, 90);
        return charGroup;
    }

    string keysGenerator() {
        string key = "";
        for (int j = 1; j <= 4; j++) {
            key += randomStringOfCharactersGenerator(4);
            if (j != 4)
                key += "-";
        }
        return key;
    }

}

namespace util {

    void swap(int& num1, int& num2) {

        int temp;
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

}