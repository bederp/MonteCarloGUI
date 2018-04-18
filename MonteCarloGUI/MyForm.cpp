#include "MyForm.h"
#include "Simulation.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MonteCarloGUI::MyForm form;
	Application::Run(%form);
}