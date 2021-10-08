// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Oct 2021
// This Program is about attendence
#include <iostream>
#include <string>

int main() {
    // This Program is about attendence
    float answerNumber = 0;

    std::string classesHeldString;
    int classesHeldInt;
    float classesHeldFloat;

    std::string classesAttendedString;
    int classesAttendedInt;
    float classesAttendedFloat;

    // input
    std::cout << "Number of your classes held: ";
    std::cin >> classesHeldString;
    std::cout << "Number of your classes attended: ";
    std::cin >> classesAttendedString;
    std::cout << "" << std::endl;

    // process
    try {
        classesHeldInt = std::stoi(classesHeldString);
        classesHeldFloat = std::stof(classesHeldString);
        classesAttendedInt = std::stoi(classesAttendedString);
        classesAttendedFloat = std::stof(classesAttendedString);
        if (classesHeldInt == classesHeldFloat &&
        classesAttendedInt == classesAttendedFloat) {
            answerNumber = classesAttendedFloat / classesHeldFloat;
            std::cout << "Attendence = " << answerNumber << std::endl;
            if (answerNumber >= 0.75) {
                std::cout << "OK, you will be allowed to sit in the exam."
                << std::endl;
                std::cout << "" << std::endl;
            } else {
                // output
                std::cout << "Your attendence is less than 75%, ";
                std::cout << "you will not be allowed to sit in the exam."
                << std::endl;
                std::cout << "" << std::endl;
            }
        } else {
            // output
            std::cout << "You didn't enter an integer." << std::endl;
            std::cout << "" << std::endl;
        }
    } catch (std::invalid_argument) {
        // output
        std::cout << "You didn't enter an integer." << std::endl;
        std::cout << "" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
