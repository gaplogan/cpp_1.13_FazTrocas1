#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, aux;

            system("cls");

            do
            {
                cout << "Digite o primeiro n�mero: ";
                cin >> n1;

                cout << "Digite o segundo n�mero: ";
                cin >> n2;

                cout << endl; //salta linha

            } while (n1 == n2);

            cout << endl;
            cout << "Valores antes das trocas:" << endl;
            cout << "Primeiro n�mero " << n1 << endl;
            cout << "Segundo n�mero " << n2 << endl;

            //{Faz as trocas utilizando uma vari�vel auxiliar}
            aux = n1;
            n1 = n2;
            n2 = aux;

            cout << endl;
            cout << endl;
            cout << "Valores antes das trocas:" << endl;
            cout << "Primeiro n�mero " << n1 << endl;
            cout << "Segundo n�mero " << n2 << endl;

    return 0;
}