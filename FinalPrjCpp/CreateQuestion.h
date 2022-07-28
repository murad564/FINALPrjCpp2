#pragma once


namespace  HF {

    class CreateQuestion {
    private:
        string _questionText;

        vector<string> _answers;

        string _answer1;
        string _answer2;
        string _answer3;
        string _answer4;
        char _correctVariant;
    public:
        CreateQuestion() = default;

        CreateQuestion(string questionText, char correctVariant, string _answer1, string answer2, string answer3 = "", string answer4 = "") {
            _questionText = questionText;
            _answer1 = _answer1;
            _answer2 = answer2;
            _answer3 = answer3;
            _answer4 = answer4;
            _correctVariant = correctVariant;
        }





        string getText() { return _questionText; }
        string getAnswer1() { return _answer1; }
        string getAnswer2() { return _answer2; }
        string getAnswer3() { return _answer3; }
        string getAnswer4() { return _answer4; }
        char getAnswerCorrectVariant() { return _correctVariant; }
    };
}