#include "examples/12_module/08_arrays_dyn_1/bank_account.h"
#include "report.h"
int main() 
{
	Report* report = new Report();
	 
	report->display();

	delete report;
	report = nullptr;

	return 0;
}