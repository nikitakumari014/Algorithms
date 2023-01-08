#include<iostream>
using namespace std;
void towerOfHanoi(int n,char from,char to,char aux)
{
    if(n==1){
    cout << "\n Move disk 1 from rod " << from << " to rod "<<to<<endl;
    return;
    }
    towerOfHanoi(n-1,from,aux,to);
    cout << "\n Move disk 1 from rod " << from << "to rod "<<to<<endl;
    towerOfHanoi(n-1,aux,to,from);
}
int main()
{
    int n = 2;
    char from = 'A',to = 'C',aux = 'B';
    towerOfHanoi(n,from,to,aux);
    return 0;
}