#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main()
{
    int user, result;
    cout<<"Welcome what currency would you like to convert today?"<<endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout<<"1) ALL To USD "<<endl;
    cout<<"2) ALL To EUR "<<endl;
    cout<<"3) ALL To GBP "<<endl;
    cout<<"4) ALL To CHF "<<endl;
    cout<<"5) ALL To MKD"<<endl;
    cout<<"6) USD To ALL "<<endl;
    cout<<"7) EUR To ALL "<<endl;
    cout<<"8) GBP To ALL "<<endl;
    cout<<"9) CHF To ALL "<<endl;
    cout<<"10) MKD To ALL"<<endl;
    cin >> user;
    if (user == 1){
        cout<<"You choose the option to convert ALL To USD"<<endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout<<"Put the price you want to convert from ALL To USD: ";
        cin >> user;
        cout<<"Please wait 2 second while doing converting!"<<endl;
        result = user * 0.012;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "The convert is finished and the result is: " << result << " USD"<<endl;
    }
    else if (user == 2){
        cout<<"You choose the option to convert ALL To EUR"<<endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout<<"Put the price you want to convert from ALL To EUR: ";
        cin >> user;
        cout<<"Please wait 2 second while doing converting!"<<endl;
        result = user * 0.011;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "The convert is finished and the result is: " << result << " EUR"<<endl;
    }
    else if (user == 3){
        cout<<"You choose the option to convert ALL To GBP"<<endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout<<"Put the price you want to convert from ALL To GBP: ";
        cin >> user;
        cout<<"Please wait 2 second while doing converting!"<<endl;
        result = user * 0.0093383;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "The convert is finished and the result is: " << result << " GBP"<<endl;
    }
    else if (user == 4){
        cout<<"You choose the option to convert ALL To CHF"<<endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout<<"Put the price you want to convert from ALL To CHF: ";
        cin >> user;
        cout<<"Please wait 2 second while doing converting!"<<endl;
        result = user * 0.0093383;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "The convert is finished and the result is: " << result << " CHF"<<endl;
    }
    else if (user == 5){
        cout<<"You choose the option to convert ALL To MKD"<<endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout<<"Put the price you want to convert from ALL To MKD: ";
        cin >> user;
        cout<<"Please wait 2 second while doing converting!"<<endl;
        result = user * 0.0093383;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "The convert is finished and the result is: " << result << " MKD"<<endl;
    }
    else if (user == 6){
        cout<<"You choose the option to convert USD To ALL"<<endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout<<"Put the price you want to convert from USD To ALL: ";
        cin >> user;
        cout<<"Please wait 2 second while doing converting!"<<endl;
        result = user * 81.80;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "The convert is finished and the result is: " << result << " ALL"<<endl;
    }
    else if (user == 7){
        cout<<"You choose the option to convert EUR To ALL"<<endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout<<"Put the price you want to convert from EUR To ALL: ";
        cin >> user;
        cout<<"Please wait 2 second while doing converting!"<<endl;
        result = user * 89.70;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "The convert is finished and the result is: " << result << " ALL"<<endl;
    }
    else if (user == 8){
        cout<<"You choose the option to convert GBP To ALL"<<endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout<<"Put the price you want to convert from GBP To ALL: ";
        cin >> user;
        cout<<"Please wait 2 second while doing converting!"<<endl;
        result = user * 107.19;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "The convert is finished and the result is: " << result << " ALL"<<endl;
    }
    else if (user == 9){
        cout<<"You choose the option to convert CHF To ALL"<<endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout<<"Put the price you want to convert from CHF To ALL: ";
        cin >> user;
        cout<<"Please wait 2 second while doing converting!"<<endl;
        result = user * 97.46;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "The convert is finished and the result is: " << result << " ALL"<<endl;
    }
    else if (user == 10){
        cout<<"You choose the option to convert MKD To ALL"<<endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout<<"Put the price you want to convert from MKD To ALL: ";
        cin >> user;
        cout<<"Please wait 2 second while doing converting!"<<endl;
        result = user * 1.46;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "The convert is finished and the result is: " << result << " ALL"<<endl;
    }
    return 0;
}
