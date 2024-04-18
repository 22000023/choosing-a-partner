#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to choosing a decent partner" << endl;
    cout << "Pick between the following options only choose the number of the option" << endl;
    cout << "Is the person 1) Male or 2) Female?" << endl;
    int gender, TOR, partyStatus, hisPartyStatus, term, body, type, IaK;
    cin >> gender;

    if (gender == 1) { // for male
        cout << "Type of relationship you're looking for: 1) Serious relationship, 2) Short term";
        cin >> TOR;
        if (TOR == 1) {
            cout << "Do you like people who go out to parties? 1) Yes, 2) No, 3) Yes but only family-related parties";
            cin >> partyStatus;
            if (partyStatus == 1) {
                cout << "Does he go out for parties: 1) Yes or 2) No" << endl;
                cin >> hisPartyStatus;
                if (hisPartyStatus == 1) {
                    cout << "Chances are you may get along better with him if he shares the same energy and liking for parties as you" << endl;
                } else if (hisPartyStatus == 2) {
                    cout << "Unless he is okay with you going out and partying then it's unlikely the relationship would last" << endl;
                }
            } else {
                cout << "Does he go out for parties: 1) Yes or 2) No" << endl;
                cin >> hisPartyStatus;
                if (hisPartyStatus == 1) {
                    cout << "Unless you're okay with him going out and partying then it's unlikely the relationship would last" << endl;
                } else if (hisPartyStatus == 2) {
                    cout << "Congratulations, he's the one" << endl;
                }
            }
        } else if (TOR == 2) {
            cout << "Is he looking for a long term or short term relationship? 1) long term, 2) short term" << endl;
            cin >> term;
            if (term == 1) {
                cout << "Your goals do not align hence better you keep looking" << endl;
            } else if (term == 2) {
                cout << "Your goals align and may work out for the time been therefore he's a suitable partner" << endl;
            }
        }
    } else if (gender == 2) { // for female
        cout << "Type of relationship: 1) serious relationship, 2) short term" << endl;
        cin >> TOR;
        if (TOR == 1) {
            cout << "is she looking for a:1) serious relationship or 2) short term" << endl;
            cin >> term;
            if (term == 1) {
                cout << "do you care about body type? 1) yes or 2) no" << endl;
                cin >> body;
                if (body == 1) {
                    cout << "does she have the body type you want? 1) yes or 2) no" << endl;
                    cin >> type;
                    if (type == 1) {
                        cout << "you should be fine together" << endl;
                    } else {
                        cout << "leave that poor soul alone" << endl;
                    }
                } else {
                    cout << "if your happy with her go for it" << endl;
                }
            }
        } else if (TOR == 2) {
            cout << "is she innocent and kind? 1) yes, 2) no" << endl;
            cin >> IaK;
            if (IaK == 1) {
                cout << "please leave her alone" << endl;
            } else {
                cout << "do you like people who go out parties? 1) yes, 2) No 3) yes but only family related parites";
                cin >> partyStatus;
                if (partyStatus == 1) {
                    cout << "Does she go out for parties: 1) yes or 2) No" << endl;
                    cin >> hisPartyStatus;
                    if (hisPartyStatus == 1) {
                        cout << "chance are you may getting along better with her then one without the same energy and liking as you" << endl;
                    } else if (hisPartyStatus == 2) {
                        cout << "unless she is okay with you going out and partying then it's unlikely the relationship would last" << endl;
                    }
                } else {
                    cout << "Does she go out for parties: 1) yes or 2) No" << endl;
                    cin >> hisPartyStatus;
                    if (hisPartyStatus == 1) {
                        cout << "unless your okay with her going out and partying then it's unlikely the relationship would last" << endl;
                    } else if (partyStatus == 2) {
                        cout << "congratulations, she's the one" << endl;
                    }
                }
            }
        }
    }

    return 0;
}
