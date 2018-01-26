#pragma once
#include "Population.h"
#include "Individual.h"
#include <iostream>
#include <fstream>

namespace OliverLowman_FinalYearProject {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GUI
	/// </summary>
	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		GUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  popSizeTextBox;
	private: System::Windows::Forms::Label^  TestText;
	private: System::Windows::Forms::Button^  StartButton;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->TestText = (gcnew System::Windows::Forms::Label());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->popSizeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(62, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"User Controls";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->TestText);
			this->panel1->Controls->Add(this->StartButton);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->popSizeTextBox);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(238, 477);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::panel1_Paint);
			// 
			// TestText
			// 
			this->TestText->AutoSize = true;
			this->TestText->Location = System::Drawing::Point(99, 340);
			this->TestText->Name = L"TestText";
			this->TestText->Size = System::Drawing::Size(0, 13);
			this->TestText->TabIndex = 4;
			// 
			// StartButton
			// 
			this->StartButton->Location = System::Drawing::Point(80, 431);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(75, 23);
			this->StartButton->TabIndex = 3;
			this->StartButton->Text = L"Start";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &GUI::StartButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Population Size:";
			// 
			// popSizeTextBox
			// 
			this->popSizeTextBox->Location = System::Drawing::Point(102, 61);
			this->popSizeTextBox->Name = L"popSizeTextBox";
			this->popSizeTextBox->Size = System::Drawing::Size(100, 20);
			this->popSizeTextBox->TabIndex = 1;
			this->popSizeTextBox->Text = L"200";
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(916, 501);
			this->Controls->Add(this->panel1);
			this->Name = L"GUI";
			this->Text = L"GUI";
			this->Load += gcnew System::EventHandler(this, &GUI::GUI_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GUI_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void StartButton_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ PopSizeInput = popSizeTextBox->Text;
		int MaxPopSize = System::Convert::ToInt16(PopSizeInput);
		Population Pop(200);
		Pop.Generate();	
		Pop.Evaluate();
		//TestOnly
		string test = Pop.PrintOutTree(170);
		string test2 = Pop.PrintOutResult(170);
		string test3 = Pop.PrintOutTotalDistance(170);
		ofstream myfile;
		myfile.open("example.txt");
		myfile << test;
		myfile << endl;
		myfile << test2;
		myfile << endl;
		myfile << test3;
		myfile.close();
		//TestONly
		
		TestText->Text = "test";
		
	}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
};
}
