#include <iostream>
using namespace std;

class Stage
{
private:
    Dimension2D dimensions;

public:
    Stage()
    {
        dimensions = Dimension2D{width : 1000, height : 500};
        cout << "Creating stage" << endl;
        cout << "Stage created with dimensions = " << dimensions << endl;
    };
};

int main()
{
    Stage stage;
}