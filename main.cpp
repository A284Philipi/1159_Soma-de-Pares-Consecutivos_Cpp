#include <iostream>

using namespace std;

int main()
{
    int n1, resultado, cont;
    while (true){
        cin >> n1;
        if (n1 == 0){
            break;
        }
        if (n1 < 0){
            n1 = n1 * -1;
            if (n1%2 == 1){
                n1--;
                n1 = n1 * -1;
            }else{
                n1 = n1 * -1;
            }
        }else{
            if (n1%2 == 1){
                n1 = n1 + 1;
            }
        }
        cont = 0;
        resultado = 0;
        for (cont; cont < 5; cont++){
            resultado = resultado + n1;
            n1 = n1 + 2;
        }
        cout << resultado <<endl;
    }
    return 0;
}
