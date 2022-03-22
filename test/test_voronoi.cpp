#include <iostream>
#include <dynamicvoronoi.h>

int main(int argc, char **argv)
{
    std::cout << "inside main" << std::endl;
    DynamicVoronoi dv;
    dv.initializeEmpty(100, 100, true);

    for ( size_t i = 0; i < 100; i++ )
    {
        dv.occupyCell(i, 0);
        dv.occupyCell(0, i);
        dv.occupyCell(i, 99);
        dv.occupyCell(99, i);
    }
    for ( size_t i = 0; i < 50; i++ )
    {
        dv.occupyCell(i, 50);
    }
    dv.update();
    dv.visualize();
    return 0;
}
