#include <iostream>
using namespace std;

int main() {
    int process[] = {1, 2, 3, 4, 5};
    
    int arrival[] = {0, 1, 2, 3, 4};
    int n = sizeof(process) / sizeof(process[0]);
    int burst_time[] = {5, 3, 4, 5, 6};

    int completed_time[n], waiting_time[n], turn_around_time[n];
    
    completed_time[0] = burst_time[0];
    waiting_time[0] = 0; 
    turn_around_time[0] = completed_time[0] - arrival[0];

    for (int i = 1; i < n; i++) {
        completed_time[i] = completed_time[i - 1] + burst_time[i];
        waiting_time[i] = completed_time[i - 1] - arrival[i];
        if (waiting_time[i] < 0) {
            waiting_time[i] = 0;
        }
        turn_around_time[i] = completed_time[i] - arrival[i];
    }

    for (int i = 0; i < n; i++) {
        cout << "Process " << process[i] << ": "
             << "Completed time: " << completed_time[i] << ", "
             << "Waiting time: " << waiting_time[i] << ", "
             << "Turn Around time: " << turn_around_time[i] << endl;
    }

    return 0;
}
