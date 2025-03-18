/*

*/
#include <stdio.h>

namespace aNmae {
	void func() {
		printf("aNmae::func()\n");
	}

}
namespace bName {
	void func() {
		printf("bName::func()\n");
	}
}

namespace cName {
	void func() {
		printf("cName::func()\n");
	}
}
using namespace cName;
using namespace std;


int main()
{
	aNmae::func();
	bName::func();
	func();
	return 0;
}