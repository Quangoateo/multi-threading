/*
BARRIER
Version A: Cyclic barrier
*/


#include <iostream>
#include <string>
#include <tuple>
#include <pthread.h>
#include <unistd.h>
using namespace std;



pthread_barrier_t syncPoint;



void* processRequest(void* argVoid) {
    auto arg = *(tuple<string,int>*)argVoid;
    string userName = get<0>(arg);
    int timeWait = get<1>(arg);

    sleep(timeWait);

    cout << "Get request from " << userName << endl;

    pthread_barrier_wait(&syncPoint);

    cout << "Process request for " << userName << endl;

    pthread_barrier_wait(&syncPoint);

    cout << "Done " << userName << endl;

    pthread_exit(nullptr);
    return nullptr;
}



int main() {
    constexpr int NUM_THREADS = 4;

    pthread_t lstTid[NUM_THREADS];

    // tuple<userName, timeWait>
    tuple<string,int> arg[NUM_THREADS] = {
        { "foo", 1 },
        { "bar", 3 },
        { "ham", 3 },
        { "eggs", 10 }
    };

    int ret = 0;


    ret = pthread_barrier_init(&syncPoint, nullptr, 2); // participant count = 2


    for (int i = 0; i < NUM_THREADS; ++i) {
        auto&& argItem = arg[i];
        ret = pthread_create(&lstTid[i], nullptr, processRequest, &argItem);
    }


    // thread "eggs" will be FREEZED


    for (auto&& tid : lstTid) {
        ret = pthread_join(tid, nullptr);
    }


    ret = pthread_barrier_destroy(&syncPoint);
    return 0;
}
