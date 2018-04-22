#pragma once
#include "Population.h"
#include "Individual.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <sstream>
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
	
	protected:
	
	
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  LowestDiffTextBox;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  CurrentGenTextBox;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  AvgDiffTextBox;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  TotalNumOfGensTextbox;
	private: System::Windows::Forms::TextBox^  RunSuccessfulTextBox;

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  popSizeTextBox;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  StartButton;
	private: System::Windows::Forms::Label^  TestText;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  NoOfGensTextBox;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  TestRangeBox1;

	private: System::Windows::Forms::TextBox^  TestRangeBox2;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  MaxTreeDepthTextBox;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ComboBox^  TreeGenComboBox;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ComboBox^  SelectionComboBox;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  CrossoverRateTextBox;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  MutationRateTextbox;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::TabPage^  tabPage4;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::TextBox^  BestFormulaTextBox;





	private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->TotalNumOfGensTextbox = (gcnew System::Windows::Forms::TextBox());
			this->RunSuccessfulTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->AvgDiffTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->CurrentGenTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->LowestDiffTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->BestFormulaTextBox = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->popSizeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->TestText = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->NoOfGensTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TestRangeBox1 = (gcnew System::Windows::Forms::TextBox());
			this->TestRangeBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->MaxTreeDepthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->TreeGenComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SelectionComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->CrossoverRateTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->MutationRateTextbox = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel2->Controls->Add(this->TotalNumOfGensTextbox);
			this->panel2->Controls->Add(this->RunSuccessfulTextBox);
			this->panel2->Controls->Add(this->label22);
			this->panel2->Controls->Add(this->label21);
			this->panel2->Controls->Add(this->AvgDiffTextBox);
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->CurrentGenTextBox);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->LowestDiffTextBox);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Location = System::Drawing::Point(256, 360);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(747, 175);
			this->panel2->TabIndex = 2;
			// 
			// TotalNumOfGensTextbox
			// 
			this->TotalNumOfGensTextbox->Enabled = false;
			this->TotalNumOfGensTextbox->Location = System::Drawing::Point(448, 67);
			this->TotalNumOfGensTextbox->Name = L"TotalNumOfGensTextbox";
			this->TotalNumOfGensTextbox->Size = System::Drawing::Size(100, 20);
			this->TotalNumOfGensTextbox->TabIndex = 9;
			// 
			// RunSuccessfulTextBox
			// 
			this->RunSuccessfulTextBox->Enabled = false;
			this->RunSuccessfulTextBox->Location = System::Drawing::Point(448, 18);
			this->RunSuccessfulTextBox->Name = L"RunSuccessfulTextBox";
			this->RunSuccessfulTextBox->Size = System::Drawing::Size(100, 20);
			this->RunSuccessfulTextBox->TabIndex = 8;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(320, 68);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(114, 13);
			this->label22->TabIndex = 7;
			this->label22->Text = L"Total Number of Gens:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(341, 21);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(88, 13);
			this->label21->TabIndex = 6;
			this->label21->Text = L"Run Successful\?";
			// 
			// AvgDiffTextBox
			// 
			this->AvgDiffTextBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->AvgDiffTextBox->Enabled = false;
			this->AvgDiffTextBox->Location = System::Drawing::Point(149, 115);
			this->AvgDiffTextBox->Name = L"AvgDiffTextBox";
			this->AvgDiffTextBox->Size = System::Drawing::Size(100, 20);
			this->AvgDiffTextBox->TabIndex = 5;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(41, 117);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(102, 13);
			this->label20->TabIndex = 4;
			this->label20->Text = L"Average Difference:";
			// 
			// CurrentGenTextBox
			// 
			this->CurrentGenTextBox->BackColor = System::Drawing::SystemColors::Window;
			this->CurrentGenTextBox->Enabled = false;
			this->CurrentGenTextBox->Location = System::Drawing::Point(149, 21);
			this->CurrentGenTextBox->Name = L"CurrentGenTextBox";
			this->CurrentGenTextBox->Size = System::Drawing::Size(100, 20);
			this->CurrentGenTextBox->TabIndex = 3;
			this->CurrentGenTextBox->Text = L"0";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(44, 21);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(99, 13);
			this->label19->TabIndex = 2;
			this->label19->Text = L"Current Generation:";
			// 
			// LowestDiffTextBox
			// 
			this->LowestDiffTextBox->Enabled = false;
			this->LowestDiffTextBox->Location = System::Drawing::Point(149, 68);
			this->LowestDiffTextBox->Name = L"LowestDiffTextBox";
			this->LowestDiffTextBox->Size = System::Drawing::Size(100, 20);
			this->LowestDiffTextBox->TabIndex = 1;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(16, 71);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(127, 13);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Current Lowest Differnce:";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(256, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(725, 363);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label23);
			this->tabPage1->Controls->Add(this->panel6);
			this->tabPage1->Controls->Add(this->pictureBox3);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(717, 337);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Tree View";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label23->Location = System::Drawing::Point(303, 3);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(92, 15);
			this->label23->TabIndex = 0;
			this->label23->Text = L"Current Best Tree";
			this->label23->Click += gcnew System::EventHandler(this, &GUI::label23_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Gainsboro;
			this->panel6->Controls->Add(this->label34);
			this->panel6->Controls->Add(this->BestFormulaTextBox);
			this->panel6->Location = System::Drawing::Point(-4, 276);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(725, 61);
			this->panel6->TabIndex = 6;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(307, 4);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(105, 13);
			this->label34->TabIndex = 7;
			this->label34->Text = L"Current Best Formula";
			// 
			// BestFormulaTextBox
			// 
			this->BestFormulaTextBox->Enabled = false;
			this->BestFormulaTextBox->Location = System::Drawing::Point(238, 24);
			this->BestFormulaTextBox->Name = L"BestFormulaTextBox";
			this->BestFormulaTextBox->Size = System::Drawing::Size(231, 20);
			this->BestFormulaTextBox->TabIndex = 10;
			this->BestFormulaTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Location = System::Drawing::Point(111, 9);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(486, 261);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label24);
			this->tabPage2->Controls->Add(this->label31);
			this->tabPage2->Controls->Add(this->label30);
			this->tabPage2->Controls->Add(this->panel5);
			this->tabPage2->Controls->Add(this->panel3);
			this->tabPage2->Controls->Add(this->label28);
			this->tabPage2->Controls->Add(this->label27);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(717, 337);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Current Best Graph";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(17, 257);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(71, 13);
			this->label31->TabIndex = 8;
			this->label31->Text = L"- Current Best";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(17, 241);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(89, 13);
			this->label30->TabIndex = 7;
			this->label30->Text = L"- Target Equation";
			this->label30->Click += gcnew System::EventHandler(this, &GUI::label30_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Black;
			this->panel5->Location = System::Drawing::Point(6, 260);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(10, 10);
			this->panel5->TabIndex = 6;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Red;
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Location = System::Drawing::Point(6, 243);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(10, 10);
			this->panel3->TabIndex = 5;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Red;
			this->panel4->Location = System::Drawing::Point(0, 20);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(10, 10);
			this->panel4->TabIndex = 6;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(317, 316);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(63, 13);
			this->label28->TabIndex = 4;
			this->label28->Text = L"Test Values";
			this->label28->Click += gcnew System::EventHandler(this, &GUI::label28_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(64, 135);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(37, 13);
			this->label27->TabIndex = 3;
			this->label27->Text = L"Result";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(107, 39);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(486, 274);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label24->Location = System::Drawing::Point(273, 33);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(147, 15);
			this->label24->TabIndex = 1;
			this->label24->Text = L"Current Best Individual Graph";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label25);
			this->tabPage3->Controls->Add(this->label33);
			this->tabPage3->Controls->Add(this->label32);
			this->tabPage3->Controls->Add(this->pictureBox2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(717, 337);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Average Distance Graph";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(6, 150);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(99, 13);
			this->label33->TabIndex = 5;
			this->label33->Text = L"Average Difference";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(312, 315);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(96, 13);
			this->label32->TabIndex = 4;
			this->label32->Text = L"Current Generation";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(107, 39);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(486, 274);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label25->Location = System::Drawing::Point(282, 33);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(126, 15);
			this->label25->TabIndex = 1;
			this->label25->Text = L"Average Distance Graph";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label29);
			this->tabPage4->Controls->Add(this->label26);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(717, 337);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Info";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(187, 111);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(358, 39);
			this->label29->TabIndex = 2;
			this->label29->Text = L"Explain language used, Population, Individual, Generation, Differeence ect\r\n\r\nAls"
				L"o Explain each page\r\n";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(295, 33);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(53, 13);
			this->label26->TabIndex = 1;
			this->label26->Text = L"Info Page";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(62, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Setup Values";
			// 
			// popSizeTextBox
			// 
			this->popSizeTextBox->Location = System::Drawing::Point(102, 46);
			this->popSizeTextBox->Name = L"popSizeTextBox";
			this->popSizeTextBox->Size = System::Drawing::Size(100, 20);
			this->popSizeTextBox->TabIndex = 1;
			this->popSizeTextBox->Text = L"200";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Population Size:";
			// 
			// StartButton
			// 
			this->StartButton->Location = System::Drawing::Point(81, 476);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(75, 23);
			this->StartButton->TabIndex = 3;
			this->StartButton->Text = L"Start";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &GUI::StartButton_Click);
			// 
			// TestText
			// 
			this->TestText->AutoSize = true;
			this->TestText->Location = System::Drawing::Point(166, 453);
			this->TestText->Name = L"TestText";
			this->TestText->Size = System::Drawing::Size(0, 13);
			this->TestText->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Max No of Gens:";
			// 
			// NoOfGensTextBox
			// 
			this->NoOfGensTextBox->Location = System::Drawing::Point(102, 72);
			this->NoOfGensTextBox->Name = L"NoOfGensTextBox";
			this->NoOfGensTextBox->Size = System::Drawing::Size(100, 20);
			this->NoOfGensTextBox->TabIndex = 6;
			this->NoOfGensTextBox->Text = L"500";
			this->NoOfGensTextBox->TextChanged += gcnew System::EventHandler(this, &GUI::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Target Formula:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(102, 98);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 8;
			this->textBox2->Text = L"X*X+(X-1)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 128);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Test Value Range:";
			// 
			// TestRangeBox1
			// 
			this->TestRangeBox1->Location = System::Drawing::Point(102, 125);
			this->TestRangeBox1->Name = L"TestRangeBox1";
			this->TestRangeBox1->Size = System::Drawing::Size(36, 20);
			this->TestRangeBox1->TabIndex = 10;
			this->TestRangeBox1->Text = L"0";
			// 
			// TestRangeBox2
			// 
			this->TestRangeBox2->Location = System::Drawing::Point(166, 125);
			this->TestRangeBox2->Name = L"TestRangeBox2";
			this->TestRangeBox2->Size = System::Drawing::Size(36, 20);
			this->TestRangeBox2->TabIndex = 11;
			this->TestRangeBox2->Text = L"1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(144, 130);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"to";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(54, 171);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(121, 21);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Tree Generation";
			this->label7->Click += gcnew System::EventHandler(this, &GUI::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 201);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(87, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Max Tree Depth:";
			// 
			// MaxTreeDepthTextBox
			// 
			this->MaxTreeDepthTextBox->Location = System::Drawing::Point(102, 198);
			this->MaxTreeDepthTextBox->Name = L"MaxTreeDepthTextBox";
			this->MaxTreeDepthTextBox->Size = System::Drawing::Size(100, 20);
			this->MaxTreeDepthTextBox->TabIndex = 15;
			this->MaxTreeDepthTextBox->Text = L"2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 233);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(94, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Tree Gen Method:";
			// 
			// TreeGenComboBox
			// 
			this->TreeGenComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->TreeGenComboBox->FormattingEnabled = true;
			this->TreeGenComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Full", L"Grow", L"Ramped Half & Half" });
			this->TreeGenComboBox->Location = System::Drawing::Point(102, 233);
			this->TreeGenComboBox->Name = L"TreeGenComboBox";
			this->TreeGenComboBox->Size = System::Drawing::Size(131, 21);
			this->TreeGenComboBox->TabIndex = 17;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(62, 270);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(104, 21);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Reproduction";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 302);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(93, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Selection Method:";
			// 
			// SelectionComboBox
			// 
			this->SelectionComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->SelectionComboBox->FormattingEnabled = true;
			this->SelectionComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Proportionate", L"Tournament" });
			this->SelectionComboBox->Location = System::Drawing::Point(102, 298);
			this->SelectionComboBox->Name = L"SelectionComboBox";
			this->SelectionComboBox->Size = System::Drawing::Size(131, 21);
			this->SelectionComboBox->TabIndex = 20;
			this->SelectionComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &GUI::comboBox2_SelectedIndexChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(2, 331);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(96, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Crossover Method:";
			// 
			// comboBox3
			// 
			this->comboBox3->Enabled = false;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(102, 330);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(100, 21);
			this->comboBox3->TabIndex = 22;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 361);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(90, 13);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Mutation Method:";
			// 
			// comboBox4
			// 
			this->comboBox4->Enabled = false;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(102, 358);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(100, 21);
			this->comboBox4->TabIndex = 24;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(10, 397);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(83, 13);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Crossover Rate:";
			// 
			// CrossoverRateTextBox
			// 
			this->CrossoverRateTextBox->Location = System::Drawing::Point(101, 395);
			this->CrossoverRateTextBox->Name = L"CrossoverRateTextBox";
			this->CrossoverRateTextBox->Size = System::Drawing::Size(37, 20);
			this->CrossoverRateTextBox->TabIndex = 26;
			this->CrossoverRateTextBox->Text = L"95";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(13, 426);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(77, 13);
			this->label15->TabIndex = 27;
			this->label15->Text = L"Mutation Rate:";
			// 
			// MutationRateTextbox
			// 
			this->MutationRateTextbox->Location = System::Drawing::Point(101, 423);
			this->MutationRateTextbox->Name = L"MutationRateTextbox";
			this->MutationRateTextbox->Size = System::Drawing::Size(37, 20);
			this->MutationRateTextbox->TabIndex = 28;
			this->MutationRateTextbox->Text = L"1";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(141, 398);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(15, 13);
			this->label16->TabIndex = 29;
			this->label16->Text = L"%";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(142, 426);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(15, 13);
			this->label17->TabIndex = 30;
			this->label17->Text = L"%";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Cursor = System::Windows::Forms::Cursors::Help;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(226, 49);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(24, 23);
			this->button1->TabIndex = 31;
			this->button1->Text = L"\?";
			this->button1->UseMnemonic = false;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->MutationRateTextbox);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->CrossoverRateTextBox);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->comboBox4);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->comboBox3);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->SelectionComboBox);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->TreeGenComboBox);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->MaxTreeDepthTextBox);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->TestRangeBox2);
			this->panel1->Controls->Add(this->TestRangeBox1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->NoOfGensTextBox);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->TestText);
			this->panel1->Controls->Add(this->StartButton);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->popSizeTextBox);
			this->panel1->Controls->Add(this->label1);
			this->panel1->ForeColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(-1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(319, 536);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::panel1_Paint);
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(978, 537);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"GUI";
			this->Text = L"GUI";
			this->Load += gcnew System::EventHandler(this, &GUI::GUI_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GUI_Load(System::Object^  sender, System::EventArgs^  e) {
		TreeGenComboBox->SelectedIndex = 0;
		SelectionComboBox->SelectedIndex = 0;
		pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::pictureBox1_Paint);
		pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::pictureBox1_Paint);
	}
	void pictureBox1_Paint(Object^, System::Windows::Forms::PaintEventArgs^ e)
	{
		Graphics^ g = e->Graphics;
		Point Point1 = Point(40, 240);
		Point Point2 = Point(445, 240);
		Point Point3 = Point(60, 260);
		Point Point4 = Point(60, 20);
		g->DrawLine(System::Drawing::Pens::Black, Point1, Point2);
		g->DrawLine(System::Drawing::Pens::Black, Point3, Point4);

		

	}


	array<Point>^ CurrentBestResultArray = gcnew array<Point>(30);
	void UpdateGraph1(Object^, System::Windows::Forms::PaintEventArgs^ e)
	{
		
		String^ TestRangeInput1 = TestRangeBox1->Text;
		String^ TestRangeInput2 = TestRangeBox2->Text;
		int TestRange1Int = Convert::ToInt16(TestRangeInput1);
		int TestRange2Int = Convert::ToInt16(TestRangeInput2);
		float TestRange1Value = TestRange1Int;
		float TestRange2Value = TestRange2Int;
		int Diff = abs(TestRange1Value - TestRange2Value);
		
		vector<float> TestRange(Diff * 10);
		float CurrentValue = TestRange1Value;
		for (int i = 0; i < Diff * 10; i++) {			
			CurrentValue = CurrentValue + 0.1;
			TestRange[i] = CurrentValue;
		}
		//float rounded_up = roundf(TestRange[6] * 10) / 10;

		float Interval = 400 / (Diff*10);
		Graphics^ g = e->Graphics;
		//Draws the X Axis notches
		for (int i = 0; i < Diff * 10; i++) {
			Point point1 = Point(80 + (Interval * i), 230);
			Point point2 = Point(80 + (Interval * i), 250);
			Point point3 = Point((80 + (Interval * i))-7, 250);
			float roundedFloat = roundf(TestRange[i] * 10) / 10;
			g->DrawLine(System::Drawing::Pens::Black, point1, point2);

			g->DrawString(roundedFloat.ToString(), gcnew System::Drawing::Font("Arial", 10), System::Drawing::Brushes::Black, point3);
			
		}
		
		//Calculates the results for each test value
		vector<float> TargetValues(Diff * 10);
		for (int i = 0; i < Diff * 10; i++) {
			float result = TestRange[i] * TestRange[i] + (TestRange[i] - 1);
			result = roundf(result * 100) / 100;
			TargetValues[i] = result;
		}
		//Gets the lowest and highest target values
		int LowestIndex = -1;
		int HighestIndex = -1;
		for (int i = 0; i < Diff * 10; i++) {
			if (LowestIndex == -1) {
				LowestIndex = i;
				HighestIndex = i;
			}
			else if (TargetValues[i] < TargetValues[LowestIndex]) {
				LowestIndex = i;
			}
			else if (TargetValues[i] > TargetValues[HighestIndex]) {
				HighestIndex = i;
			}
		}
		float LowestValue = TargetValues[LowestIndex];
		float HighestValue = TargetValues[HighestIndex];
		float HigLowDiff = HighestValue - LowestValue;
		//Draws the Y Axis notches
		float Interval2 = 230 / (Diff * 10) / 2;
		//for (int i = 0; i < (Diff * 10) / 2; i++) {
		for (int i = 0; i < 5; i++) {
			Point point1 = Point(50, 40+ (Interval * i));
			Point point2 = Point(70, 40 + (Interval * i));
			Point point3 = Point(15, (40 + (Interval * i))-7);
			g->DrawLine(System::Drawing::Pens::Black, point1, point2);
			float AxisLabel = LowestValue + ((HigLowDiff / 5)*(5-i));			
			g->DrawString(AxisLabel.ToString(), gcnew System::Drawing::Font("Arial", 10), System::Drawing::Brushes::Black, point3);
			
		}
		Point point1 = Point(60, 40);
		Point point2 = Point(60, 240);

		//Normalizes the target values to the size of the Y axis in pixels
		vector<float> NormalizedTargetValues(Diff * 10);
		float NormalizedValue = 0;
		for (int i = 0; i < Diff * 10; i++) {
			NormalizedValue = 0;
			NormalizedValue = (TargetValues[i] - LowestValue)*(200 - 0);
			NormalizedValue = NormalizedValue / (HighestValue - LowestValue) + 1;
			NormalizedTargetValues[i] = NormalizedValue;
		}

		//Draws the graphline for the target equation
		array<Point>^ PointsArray = gcnew array<Point>(Diff*10);
		Point currentPoint;
		for (int i = 0; i < Diff * 10; i++) {
			Point NewPoint = Point(80 + (Interval * i), 240 - NormalizedTargetValues[i]);
			PointsArray[i] = NewPoint;
		}
		
		g->DrawCurve(System::Drawing::Pens::Red, PointsArray);
	}
	
	void UpdateGraph2(Object^, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		g->DrawCurve(System::Drawing::Pens::Black, CurrentBestResultArray);
	}

	
	void UpdateGraph3(Object^, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		//Draws the X Axis notches
		for (int i = 0; i < 10; i++) {
			Point point1 = Point(80 + (40 * i), 230);
			Point point2 = Point(80 + (40 * i), 250);
			Point point3 = Point((80 + (40 * i)) - 7, 250);			
			g->DrawLine(System::Drawing::Pens::Black, point1, point2);
			int LabelValue = (MaxGen / 10) *(i + 1);
			g->DrawString(LabelValue.ToString(), gcnew System::Drawing::Font("Arial", 10), System::Drawing::Brushes::Black, point3);
		}

		//Draws the Y Axis notches
		for (int i = 0; i < 5; i++) {
			Point point1 = Point(50, 40 + (40 * i));
			Point point2 = Point(70, 40 + (40 * i));
			Point point3 = Point(15, (40 + (40 * i)) - 7);
			g->DrawLine(System::Drawing::Pens::Black, point1, point2);
		}
	}

	float CurrentAverageDistance;
	float MaxAverage;
	int CurrentGeneration;
	int MaxGen;
	int CurrentArrayIndex = 0;
	array<Point>^ PointsArray;
	bool FirstRun = true;
	array<String^>^ Lables = gcnew array<String^>(5);
	void UpdateGraph4(Object^, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;

		if (FirstRun == true)
		{
			float AxisMax = CurrentAverageDistance + 10;
			MaxAverage = AxisMax;
			float Interval = AxisMax / 5;
			//Draws the labels for the Y Axis notches
			for (int i = 0; i < 5; i++) {	
				Point point3 = Point(15, (40 + (40 * i)) - 7);
				float AxisLabel = Interval * (5 - i);
				float RoundedAxisLabel = roundf(AxisLabel * 10) / 10;
				g->DrawString(RoundedAxisLabel.ToString(), gcnew System::Drawing::Font("Arial", 10), System::Drawing::Brushes::Black, point3);
				Lables[i] = RoundedAxisLabel.ToString();
			}
			FirstRun = false;
		}
		else {
			
			for (int i = 0; i < 5; i++) {
				Point point3 = Point(15, (40 + (40 * i)) - 7);
				g->DrawString(Lables[i], gcnew System::Drawing::Font("Arial", 10), System::Drawing::Brushes::Black, point3);
			}
		}
	}
	Point PreviousPoint;
	void UpdateGraph5(Object^, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		float NormalizedValue1 = 0;
		NormalizedValue1 = (CurrentAverageDistance)*(200);
		NormalizedValue1 = NormalizedValue1 / (MaxAverage)+1;
		float NormalizedValue2 = 0;
		NormalizedValue2 = (CurrentGeneration)*(385);
		NormalizedValue2 = NormalizedValue2 / (MaxGen)+1;
		if (PreviousPoint.IsEmpty) {
			
			Point Point1 = Point(60, 240 - NormalizedValue1);
			Point Point2 = Point(60 + NormalizedValue2, 240 - NormalizedValue1);
			PreviousPoint = Point2;
			g->DrawLine(System::Drawing::Pens::Black, Point1, Point2);
			PointsArray[CurrentArrayIndex] = Point1;
			CurrentArrayIndex = CurrentArrayIndex + 1;
			PointsArray[CurrentArrayIndex] = Point2;
			CurrentArrayIndex = CurrentArrayIndex + 1;
			
		}
		else {
			float NormalizedValue2 = 0;
			NormalizedValue2 = (CurrentGeneration)*(385);
			NormalizedValue2 = NormalizedValue2 / (MaxGen)+1;
			Point Point1 = PreviousPoint;
			Point Point2 = Point(60 + NormalizedValue2, 240 - NormalizedValue1);
			//g->DrawLine(System::Drawing::Pens::Black, Point1, Point2);
			PreviousPoint = Point2;
			if (CurrentArrayIndex < MaxGen * 2)
			{
				PointsArray[CurrentArrayIndex] = Point1;
				CurrentArrayIndex = CurrentArrayIndex + 1;
				PointsArray[CurrentArrayIndex] = Point2;
				CurrentArrayIndex = CurrentArrayIndex + 1;
				for (int i = 0; i < CurrentGeneration * 2; i++) {
					if (i % 2 == 0)
					{
						if (PointsArray[i].Y >= 20 && PointsArray[i + 1].Y >= 20)
						{
							g->DrawLine(System::Drawing::Pens::Black, PointsArray[i], PointsArray[i + 1]);
						}
					}
				}
			}
			else {
				for (int i = 0; i < CurrentGeneration * 2; i++) {
					if (i % 2 == 0)
					{
						if (PointsArray[i].Y >= 20 && PointsArray[i + 1].Y >= 20)
						{
							g->DrawLine(System::Drawing::Pens::Black, PointsArray[i], PointsArray[i + 1]);
						}
					}
				}
			}
		}

	}
	array<String^>^ Nodes;
	int CurrentIndex;
	int CurrentIndex2;
	int CurrentLevel;
	int NumOfNodes;
	int MaxLevel = 5;

	array<Point>^ NodesPoints;



	//COUNT NODES BENEATH EACH LEAF BEFORE POSITIONING ITS CHILDREN, BASE POS OFF NUM OF NODE BENEATH
	void DrawTree(string Position, Point LastPoint) {
		CurrentLevel = CurrentLevel + 1;
		CurrentIndex = CurrentIndex + 1;
		Point NewPoint = LastPoint;
		if (Position == "Center")
		{
			NodesPoints[CurrentIndex] = NewPoint;
		}
		else if (Position == "Left") {
			NewPoint.X = NewPoint.X - 20 * (MaxLevel - CurrentLevel);
			NewPoint.Y = NewPoint.Y + 50;
			NodesPoints[CurrentIndex] = NewPoint;
		}
		else if (Position == "Right") {
			NewPoint.X = NewPoint.X + 20 * (MaxLevel - CurrentLevel);
			NewPoint.Y = NewPoint.Y + 50;
			NodesPoints[CurrentIndex] = NewPoint;
		}
		
		if (Nodes[CurrentIndex] == "-" || Nodes[CurrentIndex] == "+" || Nodes[CurrentIndex] == "*" || Nodes[CurrentIndex] == "%")
		{
			DrawTree("Left", NewPoint);

			DrawTree("Right", NewPoint);
		}
		CurrentLevel = CurrentLevel - 1;
	}
	String^ CurrentBestFormula;
	void CompileBestFormula() {
		CurrentIndex2 = CurrentIndex2 + 1;
		String^ CurrentNode = Nodes[CurrentIndex2];
		if (Nodes[CurrentIndex2] == "-" || Nodes[CurrentIndex2] == "+" || Nodes[CurrentIndex2] == "*" || Nodes[CurrentIndex2] == "%") {
			CurrentBestFormula = CurrentBestFormula + "(";
			CompileBestFormula();
			CurrentBestFormula = CurrentBestFormula + CurrentNode;
			CompileBestFormula();
			CurrentBestFormula = CurrentBestFormula + ")";
		}
		else {
			CurrentBestFormula = CurrentBestFormula + CurrentNode;
		}
	}


	void UpdateGraph6(Object^, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		for (int i = 0; i < NumOfNodes; i++) {
			g->DrawString(Nodes[i], gcnew System::Drawing::Font("Arial", 20), System::Drawing::Brushes::Black, NodesPoints[i]);
			Pen^ NewPen = gcnew Pen(Color::Black, 2);
			g->DrawEllipse(NewPen, NodesPoints[i].X-2, NodesPoints[i].Y, 36, 36);
		}
		
	}

	bool FirstPass = true;
	private: System::Void StartButton_Click(System::Object^  sender, System::EventArgs^  e) {
		FirstRun = true;
		CurrentGeneration = 0;
		CurrentArrayIndex = 0;
		CurrentIndex = -1;
		CurrentIndex2 = -1;
		CurrentLevel = 0;


		string TempArray[200] = {};
		Nodes = gcnew array<String^>(200);
		NodesPoints = gcnew array<Point>(200);
		pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::UpdateGraph1);
		pictureBox1->Refresh();		
		pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::UpdateGraph3);
		pictureBox2->Refresh();
		String^ PopSizeInput = popSizeTextBox->Text;
		int MaxPopSize = Convert::ToInt16(PopSizeInput);
		String^ MaxNoOfGensInput = NoOfGensTextBox->Text;
		int MaxNoOfGens = Convert::ToInt16(MaxNoOfGensInput);
		MaxGen = MaxNoOfGens;
		PointsArray = gcnew array<Point>(MaxGen*2);
		String^ MaxTreeDepthInput = MaxTreeDepthTextBox->Text;
		int MaxTreeDepth = Convert::ToInt16(MaxTreeDepthInput);
		String^ CrossoverRateInput = CrossoverRateTextBox->Text;
		int CrossoverRate = Convert::ToInt16(CrossoverRateInput);
		String^ MutationRateInput = MutationRateTextbox->Text;
		int MutationRate = Convert::ToInt16(MutationRateInput);
		int ChosenTreeGenMethod = TreeGenComboBox->SelectedIndex;
		int ChosenSelectionMethod = SelectionComboBox->SelectedIndex;
		String^ TestRangeInput1 = TestRangeBox1->Text;
		String^ TestRangeInput2 = TestRangeBox2->Text;
		int TestRange1Int = Convert::ToInt16(TestRangeInput1);
		int TestRange2Int = Convert::ToInt16(TestRangeInput2);
		float TestRange1Value = TestRange1Int;
		float TestRange2Value = TestRange2Int;
		int Diff = abs(TestRange1Value - TestRange2Value);
		float Interval = 400 / (Diff * 10);
		bool First = true;
		//Populates the TestRange vector
		vector<float> TestRange(Diff * 10);
		float CurrentValue = TestRange1Value;
		for (int i = 0; i < Diff * 10; i++) {
			CurrentValue = CurrentValue + 0.1;
			TestRange[i] = CurrentValue;
		}	
		//Calculates the results for each test value
		vector<float> TargetValues(Diff * 10);
		for (int i = 0; i < Diff * 10; i++) {
			float result = TestRange[i] * TestRange[i] + (TestRange[i] - 1);
			result = roundf(result * 100) / 100;
			TargetValues[i] = result;
		}
		//Gets the lowest and highest target values
		int LowestIndex = -1;
		int HighestIndex = -1;
		for (int i = 0; i < Diff * 10; i++) {
			if (LowestIndex == -1) {
				LowestIndex = i;
				HighestIndex = i;
			}
			else if (TargetValues[i] < TargetValues[LowestIndex]) {
				LowestIndex = i;
			}
			else if (TargetValues[i] > TargetValues[HighestIndex]) {
				HighestIndex = i;
			}
		}
		float LowestValue = TargetValues[LowestIndex];
		float HighestValue = TargetValues[HighestIndex];



		Population Pop(MaxPopSize, MaxTreeDepth, CrossoverRate, MutationRate,ChosenTreeGenMethod, ChosenSelectionMethod);
		Pop.Generate();	
		bool SolutionFound = false;
		for (int i = 0; i < MaxNoOfGens; i++)
		{
			if (i == 24) {
				string test = "";
			}
			Pop.Evaluate();
			vector<float> CurrentBestResults = Pop.GetCurrentBestResults();			
			vector<float> NormalizedResults(Diff * 10);
			float NormalizedValue = 0;
			for (int i = 0; i < Diff * 10; i++) {
				NormalizedValue = 0;
				NormalizedValue = (CurrentBestResults[i] - LowestValue)*(200 - 0);
				NormalizedValue = NormalizedValue / (HighestValue - LowestValue) + 1;
				NormalizedResults[i] = NormalizedValue;
			}
			Point CurrentPoint;
			for (int i = 0; i < 30; i++) {
				if (i < Diff * 10)
				{
					Point NewPoint = Point(80 + (Interval * i), 240 - NormalizedResults[i]+1);
					CurrentBestResultArray[i] = NewPoint;
					CurrentPoint = NewPoint;
				}
				else {
					CurrentBestResultArray[i] = CurrentPoint;
				}
			}
			if (FirstPass == true)
			{
				pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::UpdateGraph2);
			}
			pictureBox1->Refresh();
			CurrentAverageDistance = Pop.GetAvergeDiff();
			CurrentGeneration = i + 1;
			if (First == true&& FirstPass == true)
			{
				pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::UpdateGraph4);
				pictureBox2->Refresh();
				
			}
			if (First == true && FirstPass == true)
			{
				pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::UpdateGraph5);
				
			}
			pictureBox2->Refresh();
			Individual test = Pop.GetBestCurrentIndividualObj();
			string test2 = test.PrintTree(1);
			int BestIndividualIndex = Pop.GetBestCurrentIndividual();
			string TreeString = Pop.PrintOutNewTree(BestIndividualIndex);
			NumOfNodes = count(TreeString.begin(), TreeString.end(), ' ');
			stringstream ss(TreeString);
			
			while (ss.good() && i < NumOfNodes) {

				ss >> TempArray[i];
				++i;
			}
			for (int i = 0; i < NumOfNodes; i++) {
				Nodes[i] = gcnew String(TempArray[i].c_str());
			}
			CurrentIndex = -1;
			CurrentIndex2 = -1;
			CurrentLevel = 0;

			Point StartPoint = Point(225, 20);

			DrawTree("Center", StartPoint);
			if (First == true && FirstPass == true)
			{
				pictureBox3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::UpdateGraph6);
				First = false;
			}
			pictureBox3->Refresh();
			CurrentBestFormula = "";
			CompileBestFormula();
			BestFormulaTextBox->Text = CurrentBestFormula;
			string LowestDiffStr = to_string(Pop.GetLowestDiff());
			double dobuleValue = Pop.GetLowestDiff();
			Decimal decimalValue = System::Convert::ToDecimal(dobuleValue);
			String^ LowestDiffOutput = gcnew String(decimalValue.ToString());
			LowestDiffTextBox->Text = LowestDiffOutput;
			string CurrGenStr = to_string(i+1);
			String^ CurrGenOutput = gcnew String(CurrGenStr.c_str());
			CurrentGenTextBox->Text = CurrGenOutput;
			string AvgDiffStr = to_string(Pop.GetAvergeDiff());
			String^ AvgDiffOutput = gcnew String(AvgDiffStr.c_str());
			AvgDiffTextBox->Text = AvgDiffOutput;
			Update();
			if (Pop.GetCriteriaMet() == true) {
				SolutionFound = true;
				break;
			}
			Pop.CreateNewGen();
			
		}
		
		if (SolutionFound == true) {
			RunSuccessfulTextBox->Text = "Yes";
		}
		else
		{
			RunSuccessfulTextBox->Text = "No";
		}
		TotalNumOfGensTextbox->Text = CurrentGenTextBox->Text;
		CurrentGenTextBox->Text = "0";
		Pop.setLowestDiff(-1);

		/*

		//TestOnly 
		string test = Pop.PrintOutNewTree(Pop.GetBestCurrentIndividual());
		//string test2 = Pop.PrintOutNewTree(191);
		//string test2 = Pop.PrintOutResult(2);
		//string test3 = Pop.PrintOutTotalDistance(2);
		//string test4 = Pop.PrintOutNewTree(86);
		/*
		for (int j = 0; j < 200; j++)
		{
			string test5= Pop.PrintOutTree(j);
		}
		
		ofstream myfile;
		myfile.open("example.txt");
		myfile << test;
		myfile.close();
		//TestOnly
		*/
		FirstPass = false;
		
	}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label28_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label30_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label23_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
