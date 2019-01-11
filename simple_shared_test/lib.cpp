#include <kangaru/kangaru.hpp>
#include <iostream>

struct peanut {};
struct service {};
struct single : kgr::single_service<service> {};

void test_type_id(kgr::type_id_t id) {
	std::cout << std::boolalpha << "id the same: " << (id == kgr::type_id<peanut>()) << std::endl;
}

extern void test_container(kgr::container& container) {
	std::cout << std::boolalpha << "singles the same: " << container.contains<single>() << std::endl;
}
