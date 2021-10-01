#include <iostream>
#include <string>
using namespace std;

#define p1 1
#define p2 3
#define p3 6
#define p4 8
#define p5 12

int m, n, o, time_use;

string per1 = "p1";
string per2 = "p2";
string per3 = "p3";
string per4 = "p4";
string per5 = "p5";

string per01 = "  ";
string per02 = "  ";
string per03 = "  ";
string per04 = "  ";
string per05 = "  ";

string fire1 = "(o)";
string fire01 = "   ";

int main()
{
    while(true){
        int time = 30;
        bool light = true;
        cout << endl << "-------------------- Cross The Bridge --------------------" << endl;
        cout << "Author: Jason Wong" << endl << endl;

        cout << "Time takes: p1(1)  p2(3)  p3(6)  p4(8)  p5(12)" << endl << endl;
        cout << "Input:" << endl;
        cout << "1 for p1" << endl << "2 for p2" << endl << "3 for p3" << endl << "4 for p4" << endl << "5 for p5" << endl;

        cout << endl << "Rules:" << endl << "Five people have to cross the bridge in 30 seconds. After 30 seconds, the bridge will collapse." << endl;
        cout << "The bridge can only bear the of two people at most." << endl;
        cout << "You must bridge a light when crossing the bridge." << endl;
        cout << endl << "\"(o)\" means the light" << endl << endl;

        cout << per01 << " " << per02 << " " << per03 << " " << per04 << " " << per05 << " " << fire01 << " __-----^^^^^^^^^^-----__ " << per1 << " " << per2 << " " << per3 << " " << per4 << " " << per5 << " " << fire1 <<  "  Time:" << time << "s" << endl;

        while(time >= 0 && (per01 != "p1" || per02 != "p2" || per03 != "p3" || per04 != "p4" || per05 != "p5")){

            if (light == true){
                cin >> m >> n;

                if (m < 1 || m > 5 || n < 1 || n > 5){
                    cout << "Invalid number" << endl << endl;
                    continue;
                }

                switch(m){
                case 1:
                    per01 = "p1";
                    per1 = "  ";
                    m = 1;
                    break;

                case 2:
                    per02 = "p2";
                    per2 = "  ";
                    m = 3;
                    break;

                case 3:
                    per03 = "p3";
                    per3 = "  ";
                    m = 6;
                    break;

                case 4:
                    per04 = "p4";
                    per4 = "  ";
                    m = 8;
                    break;

                case 5:
                    per05 = "p5";
                    per5 = "  ";
                    m = 12;
                    break;

                default:
                    break;
                }

                switch(n){
                case 1:
                    per01 = "p1";
                    per1 = "  ";
                    m = 1;
                    break;

                case 2:
                    per02 = "p2";
                    per2 = "  ";
                    n = 3;
                    break;

                case 3:
                    per03 = "p3";
                    per3 = "  ";
                    n = 6;
                    break;

                case 4:
                    per04 = "p4";
                    per4 = "  ";
                    n = 8;
                    break;

                case 5:
                    per05 = "p5";
                    per5 = "  ";
                    n = 12;
                    break;

                default:
                    break;
                }

                if (m > n){
                time_use = m;
                }else{
                time_use = n;
            }
            }else{
                cin >> o;

                if (o < 1 || o > 5){
                    cout << "Invalid number" << endl << endl;
                    continue;
                }

                switch(o){
                case 1:
                    per1 = "p1";
                    per01 = "  ";
                    o = 1;
                    break;

                case 2:
                    per2 = "p2";
                    per02 = "  ";
                    o = 3;
                    break;

                case 3:
                    per3 = "p3";
                    per03 = "  ";
                    o = 6;
                    break;

                case 4:
                    per4 = "p4";
                    per04 = "  ";
                    o = 8;
                    break;

                case 5:
                    per5 = "p5";
                    per05 = "  ";
                    o = 12;
                    break;

                default:
                    break;
                }

                time_use = o;
            }

            if (light == true){
                light = false;
                fire1 = "   ";
                fire01 = "(o)";
            }else{
                light = true;
                fire01 = "   ";
                fire1 = "(o)";
            }


            time -= time_use;

            if (time >= 0){
                cout << endl << per01 << " " << per02 << " " << per03 << " " << per04 << " " << per05 << " " << fire01 << " __-----^^^^^^^^^^-----__ " << per1 << " " << per2 << " " << per3 << " " << per4 << " " << per5 << " " << fire1 <<  "  Time:" << time << "s" << endl;
            }
        }

        if(time >= 0 && per01 == "p1" && per02 == "p2" && per03 == "p3" && per04 == "p4" && per05 == "p5"){
            cout << "You win!" << endl;
        }else{
            cout << endl << "You lose. The bridge collapse." << endl;
            cout << "                   __-----^^      ^^-----__                   " << endl << endl;
        }

        per1 = "p1";
        per2 = "p2";
        per3 = "p3";
        per4 = "p4";
        per5 = "p5";

        per01 = "  ";
        per02 = "  ";
        per03 = "  ";
        per04 = "  ";
        per05 = "  ";

        fire1 = "(o)";
        fire01 = "   ";

        system("pause");
    }
}
