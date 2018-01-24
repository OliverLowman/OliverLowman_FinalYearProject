#include "GUI.h"
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array < String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OliverLowman_FinalYearProject::GUI form;
	Application::Run(%form);
}