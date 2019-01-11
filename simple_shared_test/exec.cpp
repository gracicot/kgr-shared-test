#include <kangaru/kangaru.hpp>

struct peanut {};

void test_container(kgr::container& container);
void test_type_id(kgr::type_id_t id);

struct service {};
struct single : kgr::single_service<service> {};

int main() {
	kgr::container container;
	
	container.emplace<single>();
	
	test_container(container);
	test_type_id(kgr::type_id<peanut>());
}
