#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <ctime>
#include<Windows.h>
#include <cstdlib>
using namespace std;

bool ask[10] = { true,true,true ,true,true,true,true,true,true,true };
struct game {
    string* question = new string[10]();
    string* answers = new string[50]();
    int correct_answer = 0;
    int highestscore = 0;
    int score = 0;
}test;
fstream outfile;
char r;
int  number_file();
void questionsstorescience();
void questionsstoremaths();
void displayquestion();
void scorecounter(int);
void questionsstoremovies();
void questionsstoresports();
void questionsstoregeneralhealth();
void questionsstoretechnology();
int main()
{
system("Color 7D");
    cout << R"(
__ __ __ __   __  __  __   _       ___       _
|  _/  _ \   /  _| / _  \|  _  |/ _  \ /   |  _  |  _  |     ()
| |_  | /  \/ | | \ `--.  `' / /'| |/' |`' / /'/ /| | () | | | |   _ _ __   _ _  _ _ _ _ __   _
|  | | |     | |  `--. \   / /  |  /| |  / / / /| |     | | | | | | | |_  /  / ` |/ _` | ' ` _ \ / _ \
| |   | \_/\| |/\/ / ./ /_\ |/ /./ /_\_  |  _  \ \/' / || | |/ /  | (| | (| | | | | | |  __/
\_|    \__/\__/\_/  \__/ \_/ \_/   |/ ()  \/\_\\_,|/_|  \, |\,|| || ||\__|
                                                                                __/ |
  ----------------------------------------------By: GEN_113 ---------------------------------------------

                                                                           |_/
__    _                             __              _               _  _
|  _|  | |                     _    |  _|            | |       _    |  \/  |
| |_ _ _| | _ _ __   _ _   ( _ )   | | _ _ _ _ _ _| |_    ( _ )   | .  . | _ _ _  _ _   __ _
|  / _` | _| '_ ` _ \ / ` |  / _ \/\ |  _/ _` | '/ _` | ' \   / _ \/\ | |\/| |/ _ \ '_ \| '_ \ / _` |
| || (| | || | | | | | (| | | (>  < | || (| | | | (| | | | | | (>  < | |  | |  _/ | | | | | | (_| |
\_| \_,|\_|| || ||\_,|  \__/\/ \| \_,||  \,|| ||  \__/\/ \|  |/\_|| ||| ||\,|

 _   _           _ _                                      _                            _             _
| \ | |         | ()              __                   ()               __        | |           (_)
|  \| | _ _  _| |_ _ _   __   ( _ )   _   __ _ _ _ _ _   _ _   ( _ )     _| | _  _ _  _  _ _
| . ` |/ ` |/ _` | | ' \ / _ \  / _ \/\ \ \ / / _ \ '_| | ' \ / ` |  / _ \/\  / _` |/ _ \| ' \| |/ _` |
| |\  | (| | (| | | | | |  _/ | (>  <  \ V /  _/ |  | | | | | (| | | (>  < | (| | () | | | | | (| |
\_| \_/\_,|\_,||| ||\_|  \_/\/   \/ \__||  ||| ||\,|  \__/\/  \,|\__/|| |||\_,|

      _                            _
     | |                          | |
  _| |_   __   __ _  _   _| |  _
 /_)  _ \ / _ \ / _) _ \| | | | |_/ )
|_ | | | | || | |  | || | |_| |  _ (
(_/|| ||\__/||   \__/|_/|| \)



)" << "\n";
    system("pause");
    system("cls");
    string name2;
    string name, check;
    int t;
    t = number_file() / 2;

    int choose;
    char answer;
    char reply='a';
    int m = 0, c = 0;
    while (true)
    {
        system("cls");
        system("Color 7C");
        cout << "Press S to start...\nPress H to see Highscores...\nPress X to Exit\n";//show the main menu
        cin >> answer;
        system("cls");
        if (answer == 'S' || answer == 's') {
            outfile.open("Quiz Game .txt");
            outfile.clear();
            outfile.seekg(0);
            cout << "1.Sign up\n";
            cout << "2.Sign in\n";
            cin >> choose;
            system("cls");

            if (choose == 1)
            {
                for (int i = 0; i >= 0; i++)
                {
                    system("Color 7C");
                    int c = 0;
                    cin.ignore();
                    outfile.clear();
                    outfile.seekg(0);
cout << R"(

 ___      _
|  _|    | |
| |_ _ _ | |_ _ _ _   _   _  __  _   _ _ _   _ _   _ _ _ _ _   _
|  _| ' \| _/ _ \ '| | | | |/ _ \| | | | '| | ' \ / ` | ' ` _ \ / _ \
| |_| | | | ||  _/ |    | || | () | || | |    | | | | (| | | | | | |  __/
\__/| ||\_\_||     \_, |\_/ \,||    || ||\,|| || ||\__|
                            __/ |
                           |_/


                       )" << "\a\n";


                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x7C);
                    getline(cin, name);
                    while (getline(outfile, check))
                    {
                        if (name == check)
                        {
                            c++;
                        }
                    }
                    if (c == 0)
                    {
                        break;
                    }
                    else
                        cout << "This Name Exists\nPlease Enter Another Name\n";
                }

            }

            else if (choose == 2)
            {
                for (int i = 0; i >= 0; i++)
                {
                    system("Color 7C");
                    int c = 0;
                    cin.ignore();
                    outfile.clear();
                    outfile.seekg(0);
                    cout << R"(

 ___      _
|  _|    | |
| |_ _ _ | |_ _ _ _   _   _  __  _   _ _ _   _ _   _ _ _ _ _   _
|  _| ' \| _/ _ \ '| | | | |/ _ \| | | | '| | ' \ / ` | ' ` _ \ / _ \
| |_| | | | ||  _/ |    | || | () | || | |    | | | | (| | | | | | |  __/
\__/| ||\_\_||     \_, |\_/ \,||    || ||\,|| || ||\__|
                            __/ |
                           |_/


                       )" << "\a\n";


                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x7C);
                    getline(cin, name);
                    while (getline(outfile, name2))
                    {
                        if (name == name2)
                        {
                            outfile >> test.score;// put score in test.score
                            if (test.highestscore < test.score)
                            {
                                test.highestscore = test.score;
                            }
                            c++;
                        }
                    }
                    test.score = 0;
                    if (c == 0)

                        cout << "This Name Does Not Exist ! TRY AGAIN" << endl;
                    else
                        break;

                }
            }
            system("cls");
          cout <<  R"(
 _    _ __ _     __ ___  __ ___
| |  | |  _| |   /  _ \  _  |  \/  ||  __|
| |  | | |_ | |   | /  \/ | | | .  . || |_
| |/\| |  _|| |   | |   | | | | |\/| ||  _|
\  /\  / |_| |_| \_/\ \/ / |  | || |_
 \/  \/\__/\__/\_/\__/\|  |/\_/

 )" <<              name << endl << "Start" << endl;
            system("pause");
            system("cls");
            system("color 7C");
            outfile.close();
            outfile.open("Quiz Game .txt", ios::app);
            int field;
            system("cls");
            bool rightchoice;
            do {
                rightchoice = true;
                cout << "Enter The Number Of The Field You Want \n1)Science\n2)Maths\n3)Movies\n4)Sports\n5)General Health\n6)Technology & Programming\n";
                cin >> field;
                switch (field) {
                case 1:
                    questionsstorescience();
                    break;
                case 2:
                    questionsstoremaths();
                    break;

                case 3:
                    questionsstoremovies();
                    break;
                case 4:
                    questionsstoresports();
                    break;
                case 5:
                    questionsstoregeneralhealth();
                    break;
                case 6:
                    questionsstoretechnology();
                    break;
                default:
                    cout << "Invalid Choice ! Please Enter The Number Of The Field";
                    rightchoice = false;
                    break;
                }
            } while (!rightchoice);//to make sure the user chose right choice
            displayquestion();
            system("cls");
            if (test.highestscore < test.score)
            {
                test.highestscore = test.score;
            }
            cout << "\n\n" << "Your highest score is " << test.highestscore << endl;
            cout<<"\n\n"<<"your current score is "<<test.score<<endl;
            cout<<"\n\n"<<"If you want to reset your score , press r  &  if you don't press another key\n";
            cin>>r;
            while (r=='r'||r=='R')
            {
                test.score-=test.score;
                cout<<"\n\n"<<"Your current score is "<<test.score<<endl;
                break;
            }
            Sleep(3000);
            if (test.score >= 30) {
                cout << "YOU PASSED THE FIRST ROUND, with score " << test.score << "   press y to go to round2 \t " << endl;
                cin >> reply;
                if (reply == 'y'||reply=='Y')
                    displayquestion();

             if (test.highestscore< test.score)
            {
                test.highestscore= test.score;
            }
            cout << "\n\n" << "Your highest score is " << test.highestscore << endl;
            cout<<"\n\n"<<"your current score is "<<test.score<<endl;
            cout<<"\n\n"<<"If you want to reset your score , press r  &  if you don't press another key\n";
            cin>>r;
            while (r=='r'||r=='R')
            {
                test.score-=test.score;
                cout<<"\n\n"<<"Your current score is "<<test.score<<endl;
                break;
            }
            }
            outfile << name <<endl; //write the name in the file
            outfile << test.highestscore << endl;//write the score in the file
            outfile.close();


            system("pause");

        }
        else if (answer == 'H' || answer == 'h')
        {
            outfile.open("Quiz Game .txt");
        string* names = new string[t];
        string* allscores = new string[t];
        system("color 30");

        outfile.clear();
        outfile.seekg(0);

        if (!outfile.is_open())
            cout << "error"<<"can't open file";


        for (int i = 0; i < t; i++)
        {
            getline(outfile, names[i]);
            getline(outfile, allscores[i]);
        }
        for (int r = 0; r < t; r++)
        {
            for (int r2 = r + 1; r2 < t; r2++)
            {
                if (names[r] == names[r2])
                {
                    if (allscores[r] < allscores[r2])
                    {
                        allscores[r] = allscores[r2];
                    }
                    names[r2] = "";
                    allscores[r2] = "";
                }
            }
        }
        for (int app = 0; app < t; app++)
        {
            for (int app2 = app + 1; app2 <t; app2++)
            {
                if (allscores[app] < allscores[app2])
                {
                    swap(names[app], names[app2]);
                    swap(allscores[app], allscores[app2]);
                }
            }
        }
        cout << "name" << "\t \t highscore\n";
        for (int show = 0; show < t; show++)
        {
            if (names[show] == name)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x34);
                cout << names[show] << "\t \t " << allscores[show] << endl;
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x30);
                cout << names[show] << "\t \t " << allscores[show] << endl;
            }
        }
        outfile.close();
        system("pause");
                continue;

        }
        else if (answer == 'X' || answer == 'x')
            exit(0);//to exit the program
    }

    delete[]test.question;
    delete[]test.answers;
    return 0;
}

void questionsstorescience() {
    fstream file1;// declare a file
    file1.open("science.txt");//open file
    if (file1.fail()) {
        cout << "error";
    }
    else {
        int j = 0;
        for (int i = 0; i < 10; i++) {
            getline(file1, test.question[i]);
            for (int l = 0; l < 4; l++) {
                getline(file1, test.answers[j]);
                j++;
            }
        }

    }
    file1.close();
}
void displayquestion(void) {
    srand((unsigned int)time(0));
    int answer;

    int no = rand() % 10;
    for (int i = 0; i < 5; i++) {
        system("cls");
        cout << endl << "Your score is : " << test.score << endl;
        cout << endl << "The highest score : " << test.highestscore << endl;
        while (ask[no] == false) {
            no = rand() % 10;
            if (ask[no])
                break;
        }

        cout << i + 1 << "\t" << test.question[no] << endl;
        int  k = no * 4;
        ask[no] = false;
        for (int i = 1; i < 5; i++, k++) {
            cout << i << "\t" << test.answers[k] << endl;

        }

        do {
            cout << "choose 1,2,3 or 4" << endl;
            cin >> answer;
            test.correct_answer = (no + 1) % 4;
        } while (answer > 4);



        scorecounter(answer);

    }

}
void scorecounter(int x) {

    if (test.correct_answer == 0)
        test.correct_answer = 4;
    if (x == test.correct_answer) {
        cout << endl << "correct" << endl;
        test.score += 10;

    }

    else
        cout << endl << "wrong" << endl;

    Sleep(1000);

}
void questionsstoremaths() {
    fstream file2;
    file2.open("maths.txt");
    if (file2.fail()) {
        cout << "error";
    }
    else {
        int j = 0;
        for (int i = 0; i < 10; i++) {
            getline(file2, test.question[i]);
            for (int l = 0; l < 4; l++) {
                getline(file2, test.answers[j]);
                j++;
            }
        }
    }
    file2.close();
}
void questionsstoresports() {
    fstream file3;
    file3.open("sports.txt");
    if (file3.fail()) {
        cout << "error";
    }
    else {
        int j = 0;
        for (int i = 0; i < 10; i++) {
            getline(file3, test.question[i]);
            for (int l = 0; l < 4; l++) {
                getline(file3, test.answers[j]);
                j++;
            }
        }
    }
    file3.close();
}
void questionsstoremovies() {
    fstream file4;
    file4.open("movies.txt");
    if (file4.fail()) {
        cout << "error";
    }
    else {
        int j = 0;
        for (int i = 0; i < 10; i++) {
            getline(file4, test.question[i]);
            for (int l = 0; l < 4; l++) {
                getline(file4, test.answers[j]);
                j++;
            }
        }
    }
    file4.close();
}
void questionsstoregeneralhealth() {
    fstream file5;
    file5.open("general health.txt");
    if (file5.fail()) {
        cout << "error";
    }
    else {
        int j = 0;
        for (int i = 0; i < 10; i++) {
            getline(file5, test.question[i]);
            for (int l = 0; l < 4; l++) {
                getline(file5, test.answers[j]);
                j++;
            }
        }
    }
    file5.close();
}
void questionsstoretechnology() {
    fstream file6;
    file6.open("technology.txt");
    if (file6.fail()) {
        cout << "error";
    }
    else {
        int j = 0;
        for (int i = 0; i < 10; i++) {
            getline(file6, test.question[i]);
            for (int l = 0; l < 4; l++) {
                getline(file6, test.answers[j]);
                j++;
            }
        }
    }
    file6.close();
}
int  number_file()
{
    outfile.open("Quiz Game .txt");
    string table;
    int t = 0;
    outfile.clear();
    outfile.seekg(0);
    while (getline(outfile, table))
    {
        t++;
    }
    outfile.close();
    return t;
}