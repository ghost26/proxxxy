#include <iostream>
#include "proxy_server.hpp"

int main(int argc, const char * argv[]) {
    printf("Starting server at port %d...\n", 2500);
    proxy_server server(2500);
    server.run();
    return 0;
}
