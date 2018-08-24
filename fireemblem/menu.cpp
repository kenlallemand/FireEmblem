#include "menu.h"
using namespace std;
using namespace::System::Windows::Forms;
void main(){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	fireemblem::menu form;

	Application::Run(%form);
}
