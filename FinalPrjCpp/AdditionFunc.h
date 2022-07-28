namespace  HF {


    void finishGame(size_t& correct, size_t& wrong, size_t& passed) {
        cout << setw(50) << "You finished!" << endl;
        cout << setw(17) << "   Correct: " << correct << "   Wrong: " << wrong << "   Passed: " << passed << endl;
    }



    void topScoreReadFile() {

        fstream myfile;
        myfile.open("Score.txt", ios::in);
        if (!myfile.is_open())
        {
            cout << setw(50) << "File is Empty" << endl;
        }
        else
        {
            char choice;
            string line;
            char correct;
            while (!myfile.eof())
            {
                getline(myfile, line);
                cout << setw(50) << line << endl;
            }
        }
    }




    void writeToFileAdmin(Admin admin) {

        ofstream fout("DBAdminName.txt", ios::app);

        if (!fout)
            throw"File can not created";

        if (!fout.is_open())
            throw"File can not opened";

        fout << admin.getUserName() << endl;
        fout.close();




        ofstream fout1("DBAdminPassword.txt", ios::app);
        if (!fout1)
            throw"File can not created";

        if (!fout1.is_open())
            throw"File can not opened";

        fout1 << admin.getUserPassword() << endl;

        fout1.close();


    }

    void readQuiz(size_t& correctSize, size_t& wrong, size_t& passed) {

        string filename;
        cout << setw(50) << "Filename: ";
        // getline(cin, filename);
        cin >> filename;
        filename.append(".txt");
        system("cls");
        fstream myfile;
        myfile.open(filename, ios::in);
        if (!myfile.is_open())
        {
            cout << setw(50) << "file isn't open properly, check filename again." << endl;
        }
        else
        {
            char choice;
            string line;
            char correct;
            while (!myfile.eof())
            {

                getline(myfile, line);
                cout << "\t" << line << endl;
                char asc = 65;
                for (size_t i = 0; i < 4; i++)
                {
                    getline(myfile, line);
                    if (line == "")
                        break;
                    cout << asc++ << " " << line << endl;
                }

                if (myfile.eof())
                    break;

                cout << "Submit[S]" << endl;
                cout << "Next[N]" << endl;
                cin >> choice;
                getline(myfile, line);
                correct = line[0];

                if (correct == choice || correct == choice - 32 || correct == choice + 32) {
                    correctSize++;
                }
                else if (correct != choice) {
                    wrong++;
                }
                else if (choice == 's' || choice == 'S') {
                    finishGame(correctSize, wrong, passed);
                }
                else if (choice == 'N' || choice == 'n') {
                    passed++;
                }
            }
            if (choice != 's' || choice != 'S') {
                finishGame(correctSize, wrong, passed);
            }
        }
    }
}
