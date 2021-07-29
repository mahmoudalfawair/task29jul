#include <iostream>
using namespace std;
int main()
{
    int oddNumber = 0;
    int evenNumber = 0;
//between 0 and 300 , count the numbers of odd and even
for( int j =0 ; j <= 300 ; j++ )
{
if( j%2==0)
evenNumber++;
else
oddNumber++;
}
cout << "the number of the odd number is = " << oddNumber << endl;
cout << "the number of the even number is = " << evenNumber << endl;

return 29;
}