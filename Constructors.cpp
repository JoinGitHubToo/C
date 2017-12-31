#include <iostream>
#include <string>
using namespace std;
class BuckysClass
{
public:
    BuckysClass(string y)
    {
        setName(y);
    }
    string name1;
    void setName(string x)
    {
        name2=x;
    }
    string getName()
    {
        cout << "Bucky roberts3"
             << endl;
        return name2;
    }
private:
    string name2;
};
int main()
{
    BuckysClass bo2("Bucky roberts4");
    cout << bo2.getName()
         << endl;
    BuckysClass bo("Bucky roberts4");
    bo.name1="Bucky roberts1";
    cout << bo.name1
         << endl;
    bo.setName("Bucky roberts2");
    cout << bo.getName()
         << endl;
    return 0;
}
