
#include <iostream>
 
using namespace std;
 
void hanoi_towers(int rings, int A_stolb, int C_stolb, int B_stolb)  
{                               
    if (rings!= 0)
    {
        hanoi_towers(rings-1, A_stolb, B_stolb, C_stolb);
 
        cout << A_stolb << " -> " << C_stolb << endl;
 
        hanoi_towers(rings-1, B_stolb, C_stolb, A_stolb);
    }
}
 
int main()
{
        setlocale(LC_ALL,"rus");
    int A_stolb, C_stolb, B_stolb, rings;
    cout << "Номер первого столбика:" << endl;
    cin  >> A_stolb;
    cout << "Номер конечного столбика:" << endl;
    cin  >> C_stolb;
    cout << "Номер промежуточного столбика:" << endl;
    cin  >> B_stolb;
    cout << "Количество дисков:" << endl;
    cin  >> rings;
 
    hanoi_towers(rings, A_stolb, C_stolb, B_stolb);
return 0;
}