#pragma once

namespace HF {

    class Quiz {
    private:
        vector<CreateQuestion> appliers;
        string _name;
    public:
        Quiz() = default;

        Quiz(string name) {
            _name = name;
        }

        void add(CreateQuestion document) {
            appliers.push_back(document);
        }

        void writeToFile() {
            _name.append(".txt");
            ofstream fout(_name, ios::app);


            if (!fout)
                throw"File can not created";

            if (!fout.is_open()) {
                throw"File can not opened";
            }

            for (size_t i = 0; i < appliers.size(); i++)
            {
                fout << appliers[i].getText() << endl
                    << appliers[i].getAnswer1() << endl
                    << appliers[i].getAnswer2() << endl;

                if (appliers[i].getAnswer3() == "")
                {
                    fout << appliers[i].getAnswer3() << endl
                        << appliers[i].getAnswerCorrectVariant() << endl;
                }
                else
                {
                    fout << appliers[i].getAnswer3() << endl;
                    if (appliers[i].getAnswer4() != "")
                    {
                        fout << appliers[i].getAnswer4() << endl << ""
                            << appliers[i].getAnswerCorrectVariant() << endl;
                    }
                    else
                    {
                        fout << appliers[i].getAnswer4() << endl
                            << appliers[i].getAnswerCorrectVariant() << endl;
                    }
                }
            }
            fout.close();
        }
    };
}