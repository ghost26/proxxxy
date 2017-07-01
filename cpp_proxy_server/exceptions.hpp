#ifndef exceptions_h
#define exceptions_h

#include <exception>
#include <cstring>
#include <string>

class server_exception : public std::exception {
public:
    server_exception(std::string& msg_str) : msg(msg_str) { }
    server_exception(std::string&& msg_str) : msg(std::move(msg_str)) { }

    const char* what() const noexcept override {
        return this->msg.c_str();
    }
private:
    std::string msg;
};

#endif /* exceptions_h */
