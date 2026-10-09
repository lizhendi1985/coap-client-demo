#include "client.h"

namespace coap {

std::string Client::get(const std::string& path) const {
    return "Mock CoAP response: " + path;
}

} // namespace coap

#ifdef COAP_CLIENT_TEST
#include <cassert>

int main() {
    const coap::Client client;
    assert(client.get("/hello") == "Mock CoAP response: /hello");
    assert(client.get("") == "Mock CoAP response: ");
    return 0;
}
#endif