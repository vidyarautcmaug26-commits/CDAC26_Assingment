#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    // Check for missing arguments
    if (argc != 4)
    {
        cout << "Usage : ./sensor_monitor <warn_threshold> <critical_threshold> <num_readings>" << endl;
        cout << "Error : Missing arguments." << endl;
        return 1;
    }

    // Convert command-line arguments from string to integer
    for (int i = 0; i < argc; i++)
    {
        cout <<"element i:"<< argv[i] << " "<<endl;
    }
    int warn_threshold = atoi(argv[1]);
    int critical_threshold = atoi(argv[2]);
    int num_readings = atoi(argv[3]);

    // Validate warn and critical thresholds
    if (warn_threshold >= critical_threshold)
    {
        cout << "Error : Warn threshold must be less than critical threshold." << endl;
        return 1;
    }

    // Validate number of readings
    if (num_readings < 1 || num_readings > 500)
    {
        cout << "Error : Number of readings must be between 1 and 500." << endl;
        return 1;
    }

    // Counters
    int normal = 0;
    int warning = 0;
    int critical = 0;
    int shutdown = 0;

    // Display configuration
    cout << "Config : Warn=" << warn_threshold
         << "°C Critical=" << critical_threshold
         << "°C Readings=" << num_readings << endl;

    // Generate and classify temperature readings
    for (int i = 0; i < num_readings; i++)
    {
        int temperature = rand() % 70;

        if (temperature < warn_threshold)
        {
            normal++;
        }
        else if (temperature < critical_threshold)
        {
            warning++;
        }
        else if (temperature < 60)
        {
            critical++;
        }
        else
        {
            shutdown++;
        }
    }

    // Display results
    cout << "Results : Normal:" << normal
         << " Warning:" << warning
         << " Critical:" << critical
         << " Shutdown:" << shutdown << endl;

    return 0;
}
