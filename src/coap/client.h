#ifndef COAP_CLIENT_H
#define COAP_CLIENT_H

#include <string>

namespace coap {

class Client {
public:
    // Mock response only; no network request is sent.
    std::string get(const std::string& path) const;
};

} // namespace coap

#endif // COAP_CLIENT_H