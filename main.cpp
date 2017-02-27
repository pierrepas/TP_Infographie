#include "Viewer.h"
#include <fstream>
#include <iostream>
#include <qapplication.h>
#include <sstream>
#include <string>

using namespace std;
int main(int argc, char **argv) {
    // Read command lines arguments.
    QApplication application(argc, argv);
    // Instantiate the viewer.
    Viewer viewer;
    // Give a name
    viewer.setWindowTitle("Viewer triangle soup");
    // Make the viewer window visible on screen.
    viewer.show();
    // Run main loop.
    application.exec();
    return 0;
}
