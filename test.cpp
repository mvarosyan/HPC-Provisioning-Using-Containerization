#include <iostream>
#include <upcxx/upcxx.hpp>

using namespace std;

int main(int argc, char *argv[])
{
upcxx::init();
cout << "Hello world from process " << upcxx::rank_me()
<< " out of " << upcxx::rank_n() << " processes" << endl;
upcxx::finalize();
return 0;
}
