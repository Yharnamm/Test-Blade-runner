#include <iostream>
using namespace std;
int main(){
   string election_1="cells";
   string election_2="interlink";
    cout << "Escriba cells en los que crea correctas. " << endl;
    cin >> election_1;
    cout << "has estado en una institucion. cells" << endl;
    cin >> election_1;
    cout << "Te mantienen en una celda? cells" << endl;
    cin >> election_1;
    cout << "Cuando no estas realizando tus labores "
         << "te mantienen en una pequeña caja? cells" << endl;
    cin >> election_1;
    cout << "interlink" << endl;
    cin >> election_2;
if (election_1 == "cells" && election_2 == "interlink")
{
    cout << "Eres un androide." << endl;
}
else if (!(election_1 == "cells" && election_2 == "interlink")) 
{
 cout << "eres humano. ";
}
cin.get();
cin.get();
    
return 0;
 
}