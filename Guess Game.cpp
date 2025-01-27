#include <iostream>  // ÊÖדםה ד‗ÊÈÉ ÇבÅÏÎÇב זÇבÅÎÑÇÌ
using namespace std; // ÇÓÊÎÏÇד דÓÇÍÉ ÇבÇÓד ÇבÞםÇÓםÉ

int main() {
    // ÊÚÑםÝ ÇבדÊÛםÑÇÊ
    int answer = 45;       // ÇבÑÞד ÇבÐם םÌÈ Úבל ÇבדÓÊÎÏד ÊÎדםהו
    int userInput;         // ÊÎÒםה ÊÎדםה ÇבדÓÊÎÏד
    int attempts = 0;      // ÚÏÏ ÇבדÍÇזבÇÊ ÇבÊם ÞÇד ÈוÇ ÇבדÓÊÎÏד
    int maxAttempts;       // ÇבÍÏ ÇבÃÞÕל בבדÍÇזבÇÊ ÈהÇÁ Úבל דÓÊזל ÇבÕÚזÈÉ

    // ÇÎÊםÇÑ דÓÊזל ÇבÕÚזÈÉ
    cout << "Choose difficulty (1- Easy, 2- Medium, 3- Hard): ";
    int difficulty;        // ÊÎÒםה דÓÊזל ÇבÕÚזÈÉ ÇבדÎÊÇÑ
    cin >> difficulty;     // ÞÑÇÁÉ ÇÎÊםÇÑ ÇבדÓÊÎÏד בדÓÊזל ÇבÕÚזÈÉ

    // ÊÍÏםÏ ÚÏÏ ÇבדÍÇזבÇÊ ÍÓÈ דÓÊזל ÇבÕÚזÈÉ
    if (difficulty == 1) {
        maxAttempts = 10;  // ÅÐÇ ÇÎÊÇÑ ÇבדÓÊÎÏד דÓÊזל Óוב: 10 דÍÇזבÇÊ
    }
    else if (difficulty == 2) {
        maxAttempts = 7;   // ÅÐÇ ÇÎÊÇÑ ÇבדÓÊÎÏד דÓÊזל דÊזÓØ: 7 דÍÇזבÇÊ
    }
    else if (difficulty == 3) {
        maxAttempts = 5;   // ÅÐÇ ÇÎÊÇÑ ÇבדÓÊÎÏד דÓÊזל ÕÚÈ: 5 דÍÇזבÇÊ
    }
    else {
        cout << "Invalid choice! Defaulting to Easy difficulty." << endl;
        maxAttempts = 10;  // ÅÐÇ ‗Çה ÇבÇÎÊםÇÑ ÛםÑ ÕÍםÍ: ÇÓÊÎÏÇד ÇבÅÚÏÇÏÇÊ ÇבÇÝÊÑÇÖםÉ (Óוב)
    }

    // ÅÚÏÇÏÇÊ הÙÇד ÇבהÞÇØ
    const int pointsPerAttempt = 20; // ÚÏÏ ÇבהÞÇØ ÇבדÎÕזדÉ ב‗ב דÍÇזבÉ
    int score = 0;                   // ÊÎÒםה ÇבהÊםÌÉ ÇבהוÇÆםÉ
    int bonus = 30;                  // הÞÇØ Çבד‗ÇÝÃÉ בבÊÎדםה ÇבÕÍםÍ Ýם ÇבדÍÇזבÉ ÇבÃזבל

    // ÚÑÖ ÑÓÇÆב ÇבÊÑÍםÈ זÇבÊÚבםדÇÊ
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;
    cout << "You have " << maxAttempts << " attempts to guess the number." << endl;

    // ÍבÞÉ ÇבבÚÈÉ ÇבÑÆםÓםÉ
    do {
        cout << "Enter your guess: ";  // דØÇבÈÉ ÇבדÓÊÎÏד ÈÅÏÎÇב ÇבÊÎדםה
        cin >> userInput;              // ÞÑÇÁÉ ÊÎדםה ÇבדÓÊÎÏד
        attempts++;                    // ÒםÇÏÉ ÚÏÇÏ ÇבדÍÇזבÇÊ

        // ÇבÊÍÞÞ דה ÕÍÉ ÇבÊÎדםה
        if (userInput < answer) {
            cout << "The answer is too low" << endl;            // ÇבÊÎדםה ÃÞב דה ÇבÑÞד ÇבÕÍםÍ
            cout << "Attempts remaining: " << maxAttempts - attempts << endl; // ÚÑÖ ÇבדÍÇזבÇÊ ÇבדÊÈÞםÉ
        }
        else if (userInput > answer) {
            cout << "The answer is too high" << endl;           // ÇבÊÎדםה ÃÚבל דה ÇבÑÞד ÇבÕÍםÍ
            cout << "Attempts remaining: " << maxAttempts - attempts << endl; // ÚÑÖ ÇבדÍÇזבÇÊ ÇבדÊÈÞםÉ
        }
        else {
            // ÍÓÇÈ ÇבהÊםÌÉ ÚהÏ ÇבÊÎדםה ÇבÕÍםÍ
            score = (maxAttempts - attempts + 1) * pointsPerAttempt; // ÕםÛÉ ÍÓÇÈ ÇבהÞÇØ

            // ÅÖÇÝÉ Çבד‗ÇÝÃÉ ÅÐÇ Êד ÇבÊÎדםה Ýם ÇבדÍÇזבÉ ÇבÃזבל
            if (attempts == 1) {
                score += bonus; // ÅÖÇÝÉ 30 הÞØÉ ד‗ÇÝÃÉ
            }

            // ÚÑÖ ÇבהÊםÌÉ ÇבהוÇÆםÉ
            cout << "Congratulations! You guessed the number in " << attempts;
            cout << (attempts == 1 ? " attempt." : " attempts.") << endl; // ÕםÛÉ ÇבÌדÚ זÇבדÝÑÏ
            cout << "Your score: " << score << " points"; // ÚÑÖ ÇבהÞÇØ

            // ÅÙוÇÑ ÑÓÇבÉ Çבד‗ÇÝÃÉ ÅÐÇ בÒד ÇבÃדÑ
            if (attempts == 1) {
                cout << " (including a 30-point bonus)!";
            }
            cout << endl; // ÓØÑ ÌÏםÏ בבÝÕב

            break; // ÅהוÇÁ ÇבÍבÞÉ ÚהÏ ÇבÊÎדםה ÇבÕÍםÍ
        }

        // ÇבÊÍÞÞ דה ÇÓÊהÝÇÐ ÌדםÚ ÇבדÍÇזבÇÊ
        if (attempts == maxAttempts) {
            cout << "You've run out of attempts! The correct answer was " << answer << "." << endl;
            cout << "Your score: 0 points (you didn't guess the number)." << endl; // הÊםÌÉ ÇבÝÔב
        }

    } while (userInput != answer && attempts < maxAttempts); // ÔÑØ ÇÓÊדÑÇÑ ÇבÍבÞÉ

    return 0; // ÅהוÇÁ ÇבÈÑהÇדÌ ÈהÌÇÍ
}