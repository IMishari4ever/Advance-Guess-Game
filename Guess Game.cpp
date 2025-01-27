#include <iostream>  // ����� ����� ������� ��������
using namespace std; // ������� ����� ����� ��������

int main() {
    // ����� ���������
    int answer = 45;       // ����� ���� ��� ��� �������� ������
    int userInput;         // ����� ����� ��������
    int attempts = 0;      // ��� ��������� ���� ��� ��� ��������
    int maxAttempts;       // ���� ������ ��������� ���� ��� ����� �������

    // ������ ����� �������
    cout << "Choose difficulty (1- Easy, 2- Medium, 3- Hard): ";
    int difficulty;        // ����� ����� ������� �������
    cin >> difficulty;     // ����� ������ �������� ������ �������

    // ����� ��� ��������� ��� ����� �������
    if (difficulty == 1) {
        maxAttempts = 10;  // ��� ����� �������� ����� ���: 10 �������
    }
    else if (difficulty == 2) {
        maxAttempts = 7;   // ��� ����� �������� ����� �����: 7 �������
    }
    else if (difficulty == 3) {
        maxAttempts = 5;   // ��� ����� �������� ����� ���: 5 �������
    }
    else {
        cout << "Invalid choice! Defaulting to Easy difficulty." << endl;
        maxAttempts = 10;  // ��� ��� �������� ��� ����: ������� ��������� ���������� (���)
    }

    // ������� ���� ������
    const int pointsPerAttempt = 20; // ��� ������ �������� ��� ������
    int score = 0;                   // ����� ������� ��������
    int bonus = 30;                  // ���� �������� ������� ������ �� �������� ������

    // ��� ����� ������� ����������
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;
    cout << "You have " << maxAttempts << " attempts to guess the number." << endl;

    // ���� ������ ��������
    do {
        cout << "Enter your guess: ";  // ������ �������� ������ �������
        cin >> userInput;              // ����� ����� ��������
        attempts++;                    // ����� ���� ���������

        // ������ �� ��� �������
        if (userInput < answer) {
            cout << "The answer is too low" << endl;            // ������� ��� �� ����� ������
            cout << "Attempts remaining: " << maxAttempts - attempts << endl; // ��� ��������� ��������
        }
        else if (userInput > answer) {
            cout << "The answer is too high" << endl;           // ������� ���� �� ����� ������
            cout << "Attempts remaining: " << maxAttempts - attempts << endl; // ��� ��������� ��������
        }
        else {
            // ���� ������� ��� ������� ������
            score = (maxAttempts - attempts + 1) * pointsPerAttempt; // ���� ���� ������

            // ����� �������� ��� �� ������� �� �������� ������
            if (attempts == 1) {
                score += bonus; // ����� 30 ���� ������
            }

            // ��� ������� ��������
            cout << "Congratulations! You guessed the number in " << attempts;
            cout << (attempts == 1 ? " attempt." : " attempts.") << endl; // ���� ����� �������
            cout << "Your score: " << score << " points"; // ��� ������

            // ����� ����� �������� ��� ��� �����
            if (attempts == 1) {
                cout << " (including a 30-point bonus)!";
            }
            cout << endl; // ��� ���� �����

            break; // ����� ������ ��� ������� ������
        }

        // ������ �� ������� ���� ���������
        if (attempts == maxAttempts) {
            cout << "You've run out of attempts! The correct answer was " << answer << "." << endl;
            cout << "Your score: 0 points (you didn't guess the number)." << endl; // ����� �����
        }

    } while (userInput != answer && attempts < maxAttempts); // ��� ������� ������

    return 0; // ����� �������� �����
}